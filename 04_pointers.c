// 04 - my first real look at pointers
// learning: a pointer holds an address; * reads through it, & takes one
#include <stdio.h>

int main(void) {
    int x = 42;
    int *p = &x;              // p stores the address of x

    printf("x  = %d\n", x);
    printf("&x = %p\n", (void*)&x);   // the address itself
    printf("p  = %p\n", (void*)p);    // same address
    printf("*p = %d\n", *p);          // follow the pointer back to 42

    *p = 99;                  // write through the pointer
    printf("x is now %d\n", x);   // x changed without touching x directly
    return 0;
}