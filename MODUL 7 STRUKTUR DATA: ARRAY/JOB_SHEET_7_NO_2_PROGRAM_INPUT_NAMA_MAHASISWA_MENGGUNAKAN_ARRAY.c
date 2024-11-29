#include <stdio.h>
#include <string.h>

int main() {
    int jumlah_mahasiswa;

    printf("Input banyak mahasiswa: ");
    scanf("%d", &jumlah_mahasiswa);
    getchar();

    char nama[jumlah_mahasiswa][50];

    for(int i = 0; i < jumlah_mahasiswa; i++) {
        printf("Input nama mahasiswa ke-%d: ", i + 1);
        fgets(nama[i], sizeof(nama[i]), stdin);

        size_t len = strlen(nama[i]);
        if (len > 0 && nama[i][len - 1] == '\n') {
            nama[i][len - 1] = '\0';
        }
    }

    printf("\nDaftar Nama Mahasiswa: \n");
    for(int i = 0; i < jumlah_mahasiswa; i++) {
        printf("Nama mahasiswa ke-%d: %s\n", i + 1, nama[i]);
    }

    return 0;
}