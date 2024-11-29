#include <stdio.h>
#define PHI 3.14

// Fungsi menghitung luas lingkaran
void luas(float jari_jari) {
    float hasil = PHI * jari_jari * jari_jari;
    printf("Luas lingkaran: %.2f\n", hasil);
}

// Fungsi menghitung keliling lingkaran
void keliling(float jari_jari) {
    float hasil = 2 * PHI * jari_jari;
    printf("Keliling lingkaran: %.2f\n", hasil); 
}

int main() {
    float jari_jari;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jari_jari);

    // Memanggil fungsi luas dan keliling
    luas(jari_jari);
    keliling(jari_jari);

    return 0;
}