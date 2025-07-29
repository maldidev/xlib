#include <xlang.h>
#include "lib/xalgo.h"
#include "lib/xerr.h"
#include "lib/xvec.h"

nonfunc() {
    i32_t nums[] = {5,2,8,1,3};
    xqsort(nums, 0, 4);
    
    opendef xvec v;
    xvec_init(&v, 10 Skbyte);
    
    xerr_if(v.data == null, "Alloc failed");
    return 0;
}