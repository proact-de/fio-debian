Description: Change makefile to build in correct locations.
  This patch changes the makefile to build in /usr instead of
  /usr/local. Also change manpage build dir to /usr/share/man
  instead of /usr/man.
Author: Martin Steigerwald <ms@teamix.de>

---
--- a/Makefile
+++ b/Makefile
@@ -84,13 +84,13 @@
 endif
 
 INSTALL = install
-prefix = /usr/local
+prefix = /usr
 bindir = $(prefix)/bin
 
 ifeq ($(UNAME), Darwin)
 mandir = /usr/share/man
 else
-mandir = $(prefix)/man
+mandir = $(prefix)/share/man
 endif
 
 all: .depend $(PROGS) $(SCRIPTS) FORCE
