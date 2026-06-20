// 03 - what happens when a number gets too big?
// learning: fixed-width integers wrap around instead of growing
#include <stdio.h>
#include <limits.h>

int main(void) {
    int max = INT_MAX;
    printf("INT_MAX     = %d\n", max);
    printf("INT_MAX + 1 = %d\n", max + 1);  // wraps to negative! this is overflow
    // so the same trick that makes buffer overflows possible starts right here
    unsigned char b = 255;
    printf("255 + 1 in a byte = %d\n", (unsigned char)(b + 1));  // back to 0
    return 0;
}