#ifndef XALGO_H
#define XALGO_H
#include <xlang.h>

#define xswap(a, b) {ui8_t t=a; a=b; b=t;}

funct xqsort(i32_t *arr, S_t left, S_t right) {
    if(left >= right) return 0;
    S_t i=left, j=right;
    i32_t pivot=arr[(left+right)/2];
    while(i<=j) {
        while(arr[i]<pivot) i++;
        while(arr[j]>pivot) j--;
        if(i<=j) {xswap(arr[i],arr[j]); i++; j--;}
    }
    xqsort(arr,left,j);
    xqsort(arr,i,right);
    return 0;
}
#endif