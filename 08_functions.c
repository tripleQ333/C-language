// 08 - passing by value vs passing a pointer
// learning: C copies arguments, so to change a caller's variable I pass its address
#include <stdio.h>

void try_double(int n)   { n *= 2; }       // only the copy changes
void really_double(int *n) { *n *= 2; }    // reach back through the pointer

int main(void) {
    int v = 21;
    try_double(v);
    printf("after try_double   : %d\n", v);   // still 21
    really_double(&v);
    printf("after really_double: %d\n", v);   // now 42
    return 0;
}