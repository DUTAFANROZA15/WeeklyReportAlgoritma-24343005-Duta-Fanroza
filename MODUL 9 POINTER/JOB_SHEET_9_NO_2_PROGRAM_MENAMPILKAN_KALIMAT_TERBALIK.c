#include <stdio.h>
#include <string.h>

int main() {
    char kalimat [100];
    int panjang, i;

    // Input dari pengguna
    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    // Menghilangkan karakter newline
    kalimat[strcspn(kalimat, "\n")] = '\0';

    // Menghitung panjang kalimat
    panjang = strlen(kalimat);

    // Menampilkan kalimat terbalik
    printf("Kebalikannya: ");
    for (i = panjang - 1; i >= 0; i--) {
        printf("%c", kalimat[i]);
    }
    printf("\n");

    return 0;
}