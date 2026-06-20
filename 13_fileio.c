// 13 - reading and writing files
// learning: fopen modes, always check for NULL, always fclose
#include <stdio.h>

int main(void) {
    FILE *f = fopen("scratch.txt", "w");   // "w" creates/overwrites
    if (!f) { perror("fopen"); return 1; } // perror prints why it failed
    fprintf(f, "line one\nline two\n");
    fclose(f);

    f = fopen("scratch.txt", "r");         // now read it back
    if (!f) { perror("fopen"); return 1; }
    char line[128];
    while (fgets(line, sizeof(line), f))   // fgets stops at newline or buffer size
        printf("read: %s", line);
    fclose(f);
    return 0;
}