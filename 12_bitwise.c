// 12 - working at the bit level
// learning: & | ^ ~ << >>, and how to read individual bits
#include <stdio.h>

void show_bits(unsigned char n) {
    for (int i = 7; i >= 0; i--)        // from high bit to low bit
        printf("%d", (n >> i) & 1);     // shift the bit down, mask off the rest
    printf("\n");
}

int main(void) {
    unsigned char a = 0b1100;
    unsigned char b = 0b1010;
    printf("a       = "); show_bits(a);
    printf("b       = "); show_bits(b);
    printf("a & b   = "); show_bits(a & b);  // AND
    printf("a | b   = "); show_bits(a | b);  // OR
    printf("a ^ b   = "); show_bits(a ^ b);  // XOR
    printf("a << 1  = "); show_bits(a << 1); // shift left = multiply by 2
    return 0;
}