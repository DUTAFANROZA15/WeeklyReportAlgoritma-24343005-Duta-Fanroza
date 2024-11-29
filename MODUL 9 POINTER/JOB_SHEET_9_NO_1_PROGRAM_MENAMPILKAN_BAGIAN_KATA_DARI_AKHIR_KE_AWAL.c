#include <stdio.h>

int main() {
    char string[] = "BORLAND"; // String utama
    char *ptr = string; // Pointer menunjuk ke awal string

    // Mencari panjang string
    int panjang = 0;
    while (string[panjang] != '\0') {
        panjang ++;
    }

    // Mencetak substring dari akhir ke awal
    for (int i = panjang - 1; i >= 0; i--) {
        printf("%s\n", &string[i]);
    }

    return 0;
}