// 09 - bundling data with structs
// learning: how to group fields, and dot vs arrow access
#include <stdio.h>

struct Point { int x, y; };

int main(void) {
    struct Point a = {3, 4};
    struct Point *pa = &a;

    printf("direct : (%d, %d)\n", a.x, a.y);     // dot on a value
    printf("via ptr: (%d, %d)\n", pa->x, pa->y); // arrow on a pointer (same as (*pa).x)

    pa->x = 7;   // editing through the pointer edits the original
    printf("after edit: (%d, %d)\n", a.x, a.y);
    return 0;
}