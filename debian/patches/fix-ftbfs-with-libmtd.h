Description: fix FTBFS libmtd.h:288:8: error: unknown type name 'uint8_t' (Debian Bug 815735)
Author: Martin Steigerwald <martin.steigerwald@teamix.de>

--- a/oslib/libmtd.h
+++ b/oslib/libmtd.h
@@ -29,6 +29,8 @@
 extern "C" {
 #endif
 
+#include <stdint.h>
+
 /* Maximum MTD device name length */
 #define MTD_NAME_MAX 127
 /* Maximum MTD device type string length */
