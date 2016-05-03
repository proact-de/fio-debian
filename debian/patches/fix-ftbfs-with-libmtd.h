Description: fix FTBFS libmtd.h:288:8: error: unknown type name 'uint8_t' (Debian Bug 815735)
Author: Martin Steigerwald <martin.steigerwald@teamix.de>

--- a/oslib/libmtd.h
+++ b/oslib/libmtd.h
@@ -32,6 +32,8 @@
 // Needed for uint8_t, uint64_t
 #include <stdint.h>
 
+#include <stdint.h>
+
 /* Maximum MTD device name length */
 #define MTD_NAME_MAX 127
 /* Maximum MTD device type string length */
