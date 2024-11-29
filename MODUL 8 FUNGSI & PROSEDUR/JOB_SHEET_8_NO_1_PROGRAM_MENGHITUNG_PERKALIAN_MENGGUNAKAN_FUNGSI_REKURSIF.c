#include <stdio.h>

// Fungsi rekursif untuk menghitung perkalian
float perkalian(float a, float b) {
    if( b == 0) {
        return 0;
    }
    return a + perkalian(a, b - 1);
}

int main() {
    float a, b;

    printf("Masukkan angka pertama: ");
    scanf("%f", &a);
    printf("Masukkan angka kedua: ");
    scanf("%f", &b);

    // Memanggil fungsi rekursif dan menyimpan hasilnya
    float hasil = perkalian(a, b);

    printf("%.2f x %.2f = %.2f\n", a, b, hasil);

    return 0; 
}