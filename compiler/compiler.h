#ifndef FIO_COMPILER_H
#define FIO_COMPILER_H

/* IWYU pragma: begin_exports */
#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 9) || __clang_major__ >= 6
#else
#error Compiler too old, need at least gcc 4.9
#endif
/* IWYU pragma: end_exports */

#define __must_check		__attribute__((warn_unused_result))

#define __compiletime_warning(message)	__attribute__((warning(message)))
#define __compiletime_error(message)	__attribute__((error(message)))

/*
 * Mark unused variables passed to ops functions as unused, to silence gcc
 */
#define fio_unused	__attribute__((__unused__))
#define fio_init	__attribute__((constructor))
#define fio_exit	__attribute__((destructor))

#define fio_unlikely(x)	__builtin_expect(!!(x), 0)

/*
 * Check at compile time that something is of a particular type.
 * Always evaluates to 1 so you may use it easily in comparisons.
 */
#define typecheck(type,x) \
({	type __dummy; \
	__typeof__(x) __dummy2; \
	(void)(&__dummy == &__dummy2); \
	1; \
})


#if defined(CONFIG_STATIC_ASSERT)
#define compiletime_assert(condition, msg) _Static_assert(condition, msg)

#elif !defined(CONFIG_DISABLE_OPTIMIZATIONS)

#ifndef __compiletime_error
#define __compiletime_error(message)
#endif

#ifndef __compiletime_error_fallback
#define __compiletime_error_fallback(condition)	do { } while (0)
#endif

#define __compiletime_assert(condition, msg, prefix, suffix)		\
	do {								\
		int __cond = !(condition);				\
		extern void prefix ## suffix(void) __compiletime_error(msg); \
		if (__cond)						\
			prefix ## suffix();				\
		__compiletime_error_fallback(__cond);			\
	} while (0)

#define _compiletime_assert(condition, msg, prefix, suffix) \
	__compiletime_assert(condition, msg, prefix, suffix)

#define compiletime_assert(condition, msg) \
	_compiletime_assert(condition, msg, __compiletime_assert_, __LINE__)

#else

#define compiletime_assert(condition, msg)	do { } while (0)

#endif

#ifdef FIO_INTERNAL
#define ARRAY_SIZE(x)    (sizeof((x)) / (sizeof((x)[0])))
#define FIELD_SIZE(s, f) (sizeof(((__typeof__(s))0)->f))
#endif

#endif
