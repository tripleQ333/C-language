// 11 - a function that calls itself
// learning: every recursive call gets its own stack frame; needs a base case
#include <stdio.h>

unsigned long factorial(unsigned int n) {
    if (n <= 1) return 1;          // base case stops the recursion
    return n * factorial(n - 1);   // each call waits on the one below it
}

int main(void) {
    for (unsigned int i = 1; i <= 10; i++)
        printf("%2u! = %lu\n", i, factorial(i));
    // note to self: too deep and the stack runs out -> crash
    return 0;
}