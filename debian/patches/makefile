Description: Change makefile to build in correct locations.
  This patch changes the makefile to build in /usr instead of
  /usr/local. Also change manpage build dir to /usr/share/man
  instead of /usr/man.
Author: Martin Steigerwald <ms@teamix.de>

---
--- a/Makefile
+++ b/Makefile
@@ -184,13 +184,13 @@
 else
 	INSTALL = install
 endif
-prefix = /usr/local
+prefix = /usr
 bindir = $(prefix)/bin
 
 ifeq ($(CONFIG_TARGET_OS), Darwin)
 mandir = /usr/share/man
 else
-mandir = $(prefix)/man
+mandir = $(prefix)/share/man
 endif
 
 all: $(PROGS) $(SCRIPTS) FORCE
