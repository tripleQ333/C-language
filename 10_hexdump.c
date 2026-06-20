// 10 - peeking at the raw bytes of anything
// learning: cast to unsigned char* to read memory one byte at a time
#include <stdio.h>

void dump(const void *data, size_t n) {
    const unsigned char *b = data;   // view any memory as bytes
    for (size_t i = 0; i < n; i++) {
        printf("%02x ", b[i]);       // two hex digits per byte
        if ((i + 1) % 8 == 0) printf("\n");
    }
    printf("\n");
}

int main(void) {
    int value = 0x41424344;          // spells ABCD in ascii
    printf("dumping an int (watch the byte order):\n");
    dump(&value, sizeof(value));     // little-endian machines print 44 43 42 41
    return 0;
}