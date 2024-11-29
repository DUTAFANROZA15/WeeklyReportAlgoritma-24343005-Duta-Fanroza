#include <stdio.h>

int main(){
    // Deklarasi variabel
    char nama[50], nim[10], prodi[50], fakultas[50];
    float nilai_praktikum, nilai_uts, nilai_uas, nilai_akhir;

    // Input data pengguna
    printf("Masukkan Nama: ");
    fgets(nama, sizeof(nama), stdin);

    printf("Masukkan NIM: ");
    fgets(nim, sizeof(nim), stdin);

    printf("Masukkan Program Studi: ");
    fgets(prodi, sizeof(prodi), stdin);

    printf("Masukkan Fakultas: ");
    fgets(fakultas, sizeof(fakultas), stdin);

    printf("Masukkan Nilai Praktikum: ");
    scanf("%f", &nilai_praktikum);

    printf("Masukkan Nilai UTS: ");
    scanf("%f", &nilai_uts);

    printf("Masukkan Nilai UAS: ");
    scanf("%f", &nilai_uas);

    // Menghitung nilai akhir
    nilai_akhir = (0.30 * nilai_praktikum) + (0.30 * nilai_uts) + (0.40 * nilai_uas);

    // Output hasil
    printf("\n=== Data Mahasiswa ===\n");
    printf("Nama: %s", nama);
    printf("NIM: %s", nim);
    printf("Prodi: %s", prodi);
    printf("Fakultas: %s", fakultas);
    printf("Nilai Praktikum: %2.f\n", nilai_praktikum);
    printf("Nilai UTS: %2.f\n", nilai_uts);
    printf("Nilai UAS: %2.f\n", nilai_uas);
    printf("Nilai Akhir: %2.f\n", nilai_akhir);

    return 0;
}