#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define LINE_LENGTH 16

bool isStartOfLine(size_t bytesRead) {
    return bytesRead % LINE_LENGTH == 0;
}

bool isEndOfLine(size_t bytesRead) {
    return bytesRead % LINE_LENGTH == LINE_LENGTH - 1;
}

char line[] = "00000000  0U UU UU UU UU UU UU UU UU UU UU UU UU UU UU UU";

char digits[] = "0123456789abcdef";

char toASCII(int halfbyte) {
    assert(halfbyte >= 0 && halfbyte <= 15);
    return digits[halfbyte];
}

int main(void) {
    size_t bytesRead = 0;
    char *ptr;
    puts("Offset                        Data");
    
    for (int c; (c = getchar()) != EOF; bytesRead++) {
        if (isStartOfLine(bytesRead)) {

            ptr = line;
            for (int bits = 28; bits >= 0; bits -= 4) {
                *ptr++ = toASCII((bytesRead >> bits) & 0xF);
                printf("%c\t", '-');
            }
            *ptr++ = ' ';
        }
        *ptr++ = ' ';
        *ptr++ = toASCII((c & 0xF0) >> 4);
        *ptr++ = toASCII((c & 0x0F) >> 0);

        if (isEndOfLine(bytesRead))
            puts(line);
    }
}
