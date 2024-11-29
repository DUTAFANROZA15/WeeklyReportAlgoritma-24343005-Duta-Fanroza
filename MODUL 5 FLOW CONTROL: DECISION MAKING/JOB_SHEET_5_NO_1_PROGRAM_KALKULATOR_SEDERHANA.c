#include <stdio.h>

int main() {
    int pilihan;
    float angka_1,angka_2,hasil;

    printf("\n=== PROGRAM KALKULATOR SEDERHANA ===\n");
    printf("pilih operasi : \n");
    printf("1. Penjumlahan \n");
    printf("2. Pengurangan \n");
    printf("3. Perkalian \n");
    printf("4. Pembagian \n");
    printf("5. Hasil bagi (modulus) \n");
    printf("Masukkan pilihan (1-5): ");
    scanf("%d", &pilihan);

    printf("Masukkan bilangan pertama: ");
    scanf("%f", &angka_1);
    printf("Masukkan bilangan kedua: ");
    scanf("%f", &angka_2);

    switch(pilihan) {
        case 1:
            hasil = angka_1 + angka_2;
            printf("Hasil Penjumlahan : %.2f\n", hasil);
            break;
        case 2:
            hasil = angka_1 - angka_2;
            printf("Hasil Pengurangan : %.2f\n", hasil);
            break;
        case 3:
            hasil = angka_1 * angka_2;
            printf("Hasil Perkalian : %.2f\n", hasil);
            break;
        case 4:
            if(angka_2 != 0) {
                hasil = angka_1 / angka_2;
                printf("Hasil Pembagian : %.2f\n", hasil); 
            } else {
                printf("ERROR: Pembagian dengan Nol Tidak Diperbolehkan");
            }
            break;
        case 5:
            if((int)angka_2 != 0) {
                hasil = (int)angka_1 % (int)angka_2;
                printf("Hasil Bagi (Modulus) : %.0f\n", hasil);
            } else {
                printf("ERROR: Modulus dengan NOL Tidak Diperbolehkan");
            }
            break;
        default:
        printf("Pilihan tidak valid.\n");
    }

    return 0;
}