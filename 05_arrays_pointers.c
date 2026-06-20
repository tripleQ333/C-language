// 05 - arrays and pointers are weirdly related
// learning: an array name decays to a pointer to its first element
#include <stdio.h>

int main(void) {
    int nums[5] = {10, 20, 30, 40, 50};

    // these two lines print the same thing:
    printf("nums[2]   = %d\n", nums[2]);
    printf("*(nums+2) = %d\n", *(nums + 2));  // indexing is just pointer math

    // so nums[i] literally means *(nums + i). that clicked for me.
    for (int i = 0; i < 5; i++)
        printf("%d ", *(nums + i));
    printf("\n");
    return 0;
}