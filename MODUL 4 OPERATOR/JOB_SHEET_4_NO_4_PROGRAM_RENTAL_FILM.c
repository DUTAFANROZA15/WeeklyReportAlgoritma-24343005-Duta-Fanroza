#include <stdio.h>

int main() {
    // Deklarasi variabel
    int durasi,tarif_jam_pertama = 15000;
    int tarif_jam_berikutnya;
    int total_biaya;

    // Input durasi menonton film
    printf("Masukkan durasi menonton film (jam): ");
    scanf("%d", &durasi);

    // Menghitung tarif jam berikutnya
    tarif_jam_berikutnya = tarif_jam_pertama * 0.5;

    // Menghitung total biaya
    if (durasi <= 1) {
        total_biaya = tarif_jam_pertama;
    }
    else {
        total_biaya = tarif_jam_pertama + (durasi - 1) * tarif_jam_berikutnya;
    }

    // Output hasil
    printf("Total Biaya :Rp %d\n", total_biaya);

    return 0;
}