#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f = fopen("h4ck3r_h1n7.wav", "rb");
    if (!f) {
        perror("Cannot open file");
        return 1;
    }

    // Skip the header (first 44 bytes usually for WAV)
    fseek(f, 44, SEEK_SET);

    int bit_count = 0;
    unsigned char current_char = 0;
    int c;

    while ((c = fgetc(f)) != EOF) {
        current_char = (current_char << 1) | (c & 1);
        bit_count++;

        if (bit_count == 8) {
            if (current_char == 0) break; // stop at null terminator
            printf("%c", current_char);
            bit_count = 0;
            current_char = 0;
        }
    }

    fclose(f);
    return 0;
}

