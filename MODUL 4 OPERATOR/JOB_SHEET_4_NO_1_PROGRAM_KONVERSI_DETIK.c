#include <stdio.h>

int main() {
    // Deklarasi variabel
    int total_detik,jam,menit,detik;

    // Input jumlah waktu dalam detik
    printf("Masukkan jumlah waktu dalam detik: ");
    scanf("%d", &total_detik);

    // Konversi jumlah waktu ke jam,menit,dan detik
    jam = total_detik / 3600;
    menit = (total_detik % 3600) / 60;
    detik = total_detik % 60;

    // Output Hasil 
    printf("Hasil Output: %d Jam, %d Menit, %d Detik\n ", jam, menit, detik);
    
    return 0;
}