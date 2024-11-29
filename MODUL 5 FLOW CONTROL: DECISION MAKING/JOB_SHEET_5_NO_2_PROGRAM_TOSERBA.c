#include <stdio.h>

int main() {
    float total_pembelian, diskon, total_bayar;
    int cashback;

    printf("Masukkan total pembelian (Rp): ");
    scanf("%f", &total_pembelian);

    if (total_pembelian <= 75000) {
        diskon = total_pembelian * 0.05;
    } else if (total_pembelian <= 125000) {
        diskon = total_pembelian * 0.15;
    } else {
        diskon = total_pembelian * 0.25;
        cashback = 5000;
    }

    total_bayar = total_pembelian - diskon;

    printf("\n === STRUK PEMBELIAN ===\n");
    printf("Total Pembelian: Rp %.2f\n", total_pembelian);
    printf("Diskon: Rp %.2f\n", diskon);
    if(cashback > 0) {
        printf("Cashback : Rp %d\n", cashback);
    }
    printf("Total yang Harus Dibayar : Rp %.2f\n", total_bayar - cashback);

    return 0;
}