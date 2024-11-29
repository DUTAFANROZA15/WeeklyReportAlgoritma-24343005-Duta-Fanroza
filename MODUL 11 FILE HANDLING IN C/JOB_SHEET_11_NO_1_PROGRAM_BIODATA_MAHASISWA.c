#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nama[50];
    char nim[20];
    char jurusan[50];
    char prodi[50];
} Mahasiswa;

int main() {
    int jumlah, i;
    FILE *file;

    file = fopen("datamahasiswa.txt", "w");
    if (file == NULL) {
        printf("Gagal membuka file untuk menyimpan data.\n");
        return 1;
    }

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlah);
    getchar();

    Mahasiswa mahasiswa[jumlah];

    for (i = 0; i < jumlah; i++) {
        printf("\nMasukkan data mahassiswa ke-%d: \n", i + 1);
        printf("Nama: ");
        fgets(mahasiswa[i].nama, sizeof(mahasiswa[i].nama), stdin);
        mahasiswa[i].nama[strcspn(mahasiswa[i].nama, "\n")] = '\0';

        printf("NIM: ");
        fgets(mahasiswa[i].nim, sizeof(mahasiswa[i].nim), stdin);
        mahasiswa[i].nim[strcspn(mahasiswa[i].nim, "\n")] = '\0';

        printf("Jurusan: ");
        fgets(mahasiswa[i].jurusan, sizeof(mahasiswa[i].jurusan), stdin);
        mahasiswa[i].jurusan[strcspn(mahasiswa[i].jurusan, "\n")] = '\0';

        printf("Program Studi: ");
        fgets(mahasiswa[i].prodi, sizeof(mahasiswa[i].prodi), stdin);
        mahasiswa[i].prodi[strcspn(mahasiswa[i].prodi, "\n")] = '\0';

        fprintf(file, "Data Mahasiswa ke-%d :\n", i + 1);
        fprintf(file, "Nama                 : %s\n", mahasiswa[i].nama);
        fprintf(file, "NIM:                 : %s\n", mahasiswa[i].nim);
        fprintf(file, "Jurusan              : %s\n", mahasiswa[i].jurusan);
        fprintf(file, "Program Studi        : %s\n", mahasiswa[i].prodi);
        fprintf(file, "----------------------------------------------\n");
    }

    fclose(file);
    printf("\nData berhasil disimpan ke dalam file 'datamahasiswa.txt'.\n");

    return 0;
}