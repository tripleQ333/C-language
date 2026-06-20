// 07 - where does memory come from?
// learning: stack (automatic) vs heap (malloc/free, mine to manage)
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int on_stack = 5;                       // freed automatically when main ends
    int *on_heap = malloc(sizeof(int));     // I asked the OS for this
    if (!on_heap) return 1;                 // malloc can fail, always check

    *on_heap = 10;
    printf("stack value @ %p = %d\n", (void*)&on_stack, on_stack);
    printf("heap  value @ %p = %d\n", (void*)on_heap, *on_heap);

    free(on_heap);     // if I forget this, that's a memory leak
    return 0;
}