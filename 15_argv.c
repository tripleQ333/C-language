// 15 - reading command-line arguments
// learning: argc counts args, argv holds them, argv[0] is the program name
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("program     : %s\n", argv[0]);
    printf("you gave me %d argument(s)\n", argc - 1);

    long sum = 0;
    for (int i = 1; i < argc; i++) {
        printf("  arg %d = %s\n", i, argv[i]);
        sum += atoi(argv[i]);   // atoi turns "12" into 12 (0 if not a number)
    }
    printf("sum of args = %ld\n", sum);
    // try: ./15_argv 3 4 5
    return 0;
}