#include <stdio.h>

int main() {
    // Deklarasi variabel dan konstanta
    float diameter = 12;
    float r = diameter / 2;
    float volume, luas_permukaan;
    const float PHI = 3.14;

    // Rumus menghitung volume bola 
    volume = (4.0 / 3.0) * PHI * r * r * r;
    // Rumus menghitung luas permukaan bola
    luas_permukaan = 4 * PHI * r * r; 

    // Output volume dan luas permukaan bola
    printf("Volume Bola : %.2f cm^3\n", volume);
    printf("Luas Permukaan Bola: %.2f cm^2\n", luas_permukaan);

    return 0;
}