// 14 - an array that grows at runtime
// learning: malloc then realloc to resize, and why I track capacity vs count
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t cap = 2, count = 0;
    int *arr = malloc(cap * sizeof(int));
    if (!arr) return 1;

    for (int i = 0; i < 10; i++) {
        if (count == cap) {                // full? double the room
            cap *= 2;
            int *bigger = realloc(arr, cap * sizeof(int));
            if (!bigger) { free(arr); return 1; }  // realloc can fail too
            arr = bigger;
            printf("grew capacity to %zu\n", cap);
        }
        arr[count++] = i * i;
    }

    for (size_t i = 0; i < count; i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    return 0;
}