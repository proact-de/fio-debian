Description: Change makefile to build in correct locations.
  This patch changes the makefile to build in /usr instead of
  /usr/local. Also change manpage build dir to /usr/share/man
  instead of /usr/man.
Author: Martin Steigerwald <ms@teamix.de>

---
--- a/Makefile
+++ b/Makefile
@@ -84,7 +84,7 @@
 endif
 
 INSTALL = install
-prefix = /usr/local
+prefix = /usr
 bindir = $(prefix)/bin
 
 ifeq ($(UNAME), Darwin)
