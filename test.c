#include <xlang.h>
#include "lib/xmem.h"
#include "lib/xio.h"

nonfunc() {
    i32_t num;
    xputs("Enter a number:");
    xscan_i32(&num);
    outtd("You entered: %d\n", num);

    ui8_t *buf = xmalloc(100 Skbyte);
    xfree(buf);
    return 0;
}