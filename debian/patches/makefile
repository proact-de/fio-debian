Description: Change makefile to build in correct locations.
  This patch changes the makefile to build in /usr instead of
  /usr/local. Also change manpage build dir to /usr/share/man
  instead of /usr/man.
Author: Martin Steigerwald <ms@teamix.de>

---
Index: fio/Makefile
===================================================================
--- fio.orig/Makefile	2011-06-27 12:38:32.827925996 +0200
+++ fio/Makefile	2011-06-27 12:38:43.563935069 +0200
@@ -65,9 +65,9 @@
 endif
 
 INSTALL = install
-prefix = /usr/local
+prefix = /usr
 bindir = $(prefix)/bin
-mandir = $(prefix)/man
+mandir = $(prefix)/share/man
 
 .c.o:
 	$(QUIET_CC)$(CC) -o $@ -c $(CFLAGS) $(CPPFLAGS) $<
