#include <stdio.h>

// Fungsi untuk penjumlahan
float tambah(float a, float b) {
    return a + b;
}

// Fungsi untuk pengurangan
float kurang(float a, float b) {
    return a - b;
}

// Fungsi untuk perkalian
float kali(float a, float b) {
    return a * b;
}

// Fungsi untuk pembagian
float bagi(float a, float b) {
    if(b != 0) {
        return a / b;
    } else {
        printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
        return 0;
    }
}

int main() {
    int pilihan;
    float angka_1,angka_2;

// Menu operasi aritmatika
printf("\n=== PROGRAM OPERASI ARITMATIKA\n");
printf("1. Penjumlahan\n");
printf("2. Pengurangan\n");
printf("3. Perkalian\n");
printf("4. Pembagian\n");
printf("Pilih operasi (1-4): ");
scanf("%d", &pilihan);

printf("Masukkan angka pertama: ");
scanf("%f", &angka_1);
printf("Masukkan angka kedua: ");
scanf("%f", &angka_2);

switch(pilihan) {
    case 1:
        printf("Hasil: %.2f\n", tambah(angka_1, angka_2));
        break;
    case 2:
        printf("Hasil: %.2f\n", kurang(angka_1, angka_2));
        break;
    case 3:
        printf("Hasil: %.2f\n", kali(angka_1, angka_2));
        break;
    case 4:
        printf("hasil: %.2f\n", bagi(angka_1, angka_2));
        break;
    default:
        printf("Operator tidak valid.\n");
    }

    return 0;
}