#include <stdio.h>

// Fungsi menghitung besar potongan 
void potong(float total_pembelian, float *diskon, float *total_bayar) {
    if(total_pembelian < 1000000) {
        *diskon = 0;
    } else if (total_pembelian >= 1000000 && total_pembelian < 3000000) {
        *diskon = 0.20 * total_pembelian;
    } else {
        *diskon = 0.35 * total_pembelian;
    }
    *total_bayar = total_pembelian - *diskon;
}

int main() {
    float total_pembelian, diskon, total_bayar;

    printf("\nProgram Hitung Potongan\n");
    printf("Total Pembelian (Rp.) : ");
    scanf("%f", &total_pembelian);

    potong(total_pembelian, &diskon, &total_bayar);

    printf("Besar Diskon : Rp. %.2f\n", diskon);
    printf("Besar Yang Harus Dibayarkan : Rp. %.2f\n", total_bayar);

    return 0;
}