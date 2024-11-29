#include <stdio.h>
#include <string.h>

// Struktur untuk menyimpan data mahasiswa
typedef struct {
    char npm[15];
    char nama[50];
    char tanggal_lahir[15];
    char alamat[50];
    char hp[15];
} Mahasiswa;

int main() {
    Mahasiswa data[100];
    int jumlah = 0;
    char pilihan;

    do {
        printf("Masukkan data mahasiswa: \n");
        printf("NPM            : ");
        scanf("%s", data[jumlah].npm);
        getchar();

        printf("NAMA           : ");
        fgets(data[jumlah].nama, sizeof(data[jumlah].nama), stdin);
        data[jumlah].nama[strcspn(data[jumlah].nama, "\n")] = '\0';

        printf("TANGGAL LAHIR  : ");
        scanf("%s", data[jumlah].tanggal_lahir);
        getchar();

        printf("ALAMAT         : ");
        fgets(data[jumlah].alamat, sizeof(data[jumlah].alamat), stdin);
        data[jumlah].alamat[strcspn(data[jumlah].alamat, "\n")] = '\0';

        printf("HP             : ");
        scanf("%s", data[jumlah].hp);
        getchar();

        jumlah++;

        printf("Mau memasukkan data lagi (y/t)? ");
        scanf("%c", &pilihan);
        getchar();

    } while (pilihan == 'y' || pilihan == 'Y');

    printf("\nData Mahasiswa: \n");
    printf("------------------\n");
    for (int i = 0; i < jumlah; i++) {
        printf("%s %s %s %s %s\n", data[i].npm, data[i].nama, data[i].tanggal_lahir, data[i].alamat, data[i].hp);
    }

    return 0;
}