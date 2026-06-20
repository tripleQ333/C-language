// 02 - how big is each type, actually?
// learning: sizeof, and that sizes are not fixed by the language
#include <stdio.h>

int main(void) {
    // curious: does an int really change size between machines?
    printf("char   : %zu byte(s)\n", sizeof(char));
    printf("int    : %zu byte(s)\n", sizeof(int));
    printf("long   : %zu byte(s)\n", sizeof(long));
    printf("float  : %zu byte(s)\n", sizeof(float));
    printf("double : %zu byte(s)\n", sizeof(double));
    printf("void*  : %zu byte(s)\n", sizeof(void*));  // pointer size = the machine's word size
    return 0;
}