Description: Change makefile to build in correct locations.
  This patch changes the makefile to build in /usr instead of
  /usr/local. Also change manpage build dir to /usr/share/man
  instead of /usr/man.
Author: Martin Steigerwald <ms@teamix.de>

---
--- a/Makefile
+++ b/Makefile
@@ -200,14 +200,14 @@
 else
 	INSTALL = install
 endif
-prefix = /usr/local
+prefix = /usr
 bindir = $(prefix)/bin
 
 ifeq ($(CONFIG_TARGET_OS), Darwin)
 mandir = /usr/share/man
 sharedir = /usr/share/fio
 else
-mandir = $(prefix)/man
+mandir = $(prefix)/share/man
 sharedir = $(prefix)/share/fio
 endif
 
