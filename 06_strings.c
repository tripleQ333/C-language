// 06 - strings are just char arrays ending in '\0'
// learning: there is no real "string" type, and the null terminator matters
#include <stdio.h>
#include <string.h>

int main(void) {
    char name[] = "QQQ";   // really {'Q','Q','Q','\0'}

    printf("text   : %s\n", name);
    printf("length : %zu\n", strlen(name));   // counts up to '\0', not including it
    printf("bytes  : %zu\n", sizeof(name));   // 4: includes the hidden '\0'

    // walking it by hand to see the terminator
    for (int i = 0; name[i] != '\0'; i++)
        printf("  [%d] = '%c'\n", i, name[i]);
    return 0;
}