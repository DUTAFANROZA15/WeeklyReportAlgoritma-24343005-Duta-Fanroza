#include <stdio.h>
#include <math.h>

#define PHI 3.14

int main() {
    int pilihan;
    float luas_permukaan;
    float jari_jari, sisi, panjang, lebar, tinggi;

    // Menampilkan menu pilihan
    printf("=== PROGRAM MENGHITUNG LUAS PERMUKAAN BANGUN RUANG ===\n");
    printf("Pilih Bangun Ruang:\n");
    printf("1. Luas Permukaan Bola\n");
    printf("2. Luas Permukaan Kubus\n");
    printf("3. Luas Permukaan Balok\n");
    printf("4. Luas Permukaan Tabung\n");
    printf("Masukkan Pilihan (1-4): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1: // Luas Permukaan Bola
            printf("Masukan jari-jari bola: ");
            scanf("%f", &jari_jari);
            luas_permukaan = 4 * PHI * jari_jari * jari_jari;
            printf("Luas Permukaan Bola: %.2f\n", luas_permukaan);
            break;

        case 2: // Luas Permukaan Kubus
            printf("Masukkan panjang sisi kubus: ");
            scanf("%f", &sisi);
            luas_permukaan = 6 * sisi * sisi;
            printf("Luas Permukaan Kubus: %.2f\n", luas_permukaan);
            break;

        case 3: // Luas Permukaan Balok
            printf("Masukkan panjang balok: ");
            scanf("%f", &panjang);
            printf("Masukkan lebar Balok: ");
            scanf("%f", &lebar);
            printf("Masukkan tinggi balok: ");
            scanf("%f", &tinggi);
            luas_permukaan = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
            printf("Luas Permukaan Balok: %.2f\n", luas_permukaan);
            break;

        case 4: // Luas Permukaan Tabung
            printf("Masukkan jari_jari tabung: ");
            scanf("%f", &jari_jari);
            printf("Masukkan tinggi tabung: ");
            scanf("%f", &tinggi);
            luas_permukaan = 2 * PHI * jari_jari * (jari_jari + tinggi);
            printf("Luas Permukaan Tabung: %.2f\n", luas_permukaan);
            break;
        default:
            printf("Pilihan Tidak Valid. Silahkan Pilih antara 1-4\n");
            break;
    }

    return 0;
}