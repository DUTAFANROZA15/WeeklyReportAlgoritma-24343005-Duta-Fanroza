#include <stdio.h>

int main () {
    // Deklarasi variabel
    float nilai_presensi, nilai_praktek, nilai_uts, nilai_uas,nilai_akhir;

    // Deklarasi nilai
    nilai_presensi = 85;
    nilai_praktek = 65;
    nilai_uts = 80;
    nilai_uas = 75;

    // Menghitung nilai akhir
    nilai_akhir = (nilai_presensi * 0.10) + (nilai_praktek * 0.20) + (nilai_uts * 0.30) + (nilai_uas * 0.40);

    // Output nilai akhir
    printf("Nilai Akhir : %.2f\n", nilai_akhir);

    return 0;
}