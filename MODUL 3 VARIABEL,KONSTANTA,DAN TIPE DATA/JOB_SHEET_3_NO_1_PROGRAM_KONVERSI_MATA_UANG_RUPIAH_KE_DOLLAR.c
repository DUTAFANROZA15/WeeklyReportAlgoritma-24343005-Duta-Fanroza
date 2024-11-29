#include <stdio.h>

int main() {
    // Deklarasi variabel dan nilai
    float rupiah, dollar;
    const float KURS = 14250.0;

    // Input jumlah uang dalam rupiah
    printf("Masukkan jumlah uang dalam Rupiah:Rp ");
    scanf("%f", &rupiah);

    // Menghitung uang dalam dollar
    dollar = rupiah / KURS;

    // Output jumlah uang dalam dollar
    printf("Jumlah Dollar yang diberikan: $%.2f\n ", dollar);

    return 0;
}