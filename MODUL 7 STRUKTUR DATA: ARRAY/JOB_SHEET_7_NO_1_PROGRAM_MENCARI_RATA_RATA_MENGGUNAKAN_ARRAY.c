#include <stdio.h>

int main () {
    int nilai[20], jumlah = 0;
    float rata_rata;

    printf("Masukkan nilai 20 mahasiswa:\n");

    for(int i = 1; i <= 20; i++) {
        scanf("%d", &nilai [i]);
        jumlah += nilai[i];
    }

    rata_rata = (float)jumlah / 20;

    printf("\n Rata-rata nilai: %.2f\n", rata_rata);

    return 0;
}