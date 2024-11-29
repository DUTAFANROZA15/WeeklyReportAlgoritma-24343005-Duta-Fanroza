#include <stdio.h>

int main () {
    // Deklarasi variabel
    char nama_pembeli[50],nama_barang[50];
    float harga_barang_satuan,harga_total;
    int jumlah_barang;

    // Input nama pembeli
    printf("Masukkan nama pembeli: ");
    fgets(nama_pembeli, sizeof(nama_pembeli), stdin);
    // Input nama barang
    printf("Masukkan nama barang: ");
    fgets(nama_barang, sizeof(nama_barang), stdin);
    // Input harga barang satuan
    printf("Masukkan harga barang satuan: ");
    scanf("%f", &harga_barang_satuan);
    // Input jumlah barang yang dibeli
    printf("Masukkan jumlah barang yang dibeli: ");
    scanf("%d", &jumlah_barang);

    // Menghitung harga total
    harga_total = harga_barang_satuan * jumlah_barang;

    // Output hasil
    printf("\n === STRUK PEMBELIAN === \n");
    printf("Nama pembeli: %s", nama_pembeli);
    printf("Nama barang: %s", nama_barang);
    printf("Harga barang satuan: %.2f\n", harga_barang_satuan);
    printf("Jumlah barang yang dibeli: %d\n", jumlah_barang);
    printf("Harga total: %.2f\n", harga_total);

    return 0;
}