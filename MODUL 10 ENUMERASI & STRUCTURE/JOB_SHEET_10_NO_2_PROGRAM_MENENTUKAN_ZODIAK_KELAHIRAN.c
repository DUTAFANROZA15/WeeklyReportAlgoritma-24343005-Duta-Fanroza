#include <stdio.h>
#include <string.h>

// Struktur untuk menyimpan informasi zodiak
typedef struct {
    char nama[15];
    int mulai_tanggal, mulai_bulan;
    int akhir_tanggal, akhir_bulan;
} Zodiak;

int main() {
    // Deklarasi array struktur untuk menyimpan rentang tanggal setiap zodiak
    Zodiak zodiak[] = {
        {"CAPRICORN", 22, 12, 19, 1},
        {"AQUARIUS", 20, 1, 18, 2},
        {"PISCES", 19, 2, 20, 3},
        {"ARIES", 21, 3, 19, 4},
        {"TAURUS", 20, 4, 20, 5},
        {"GEMINI", 21, 5, 20, 6},
        {"CANCER", 21, 6, 22, 7},
        {"LEO", 23, 7, 22, 8},
        {"VIRGO", 23, 8, 22, 9},
        {"LIBRA", 23, 9, 22, 10},
        {"SCORPIO", 23, 10, 21, 11},
        {"SAGITARIUS", 22, 11, 21, 12}
    };

    int tanggal, bulan, tahun, i;
    char zodiak_anda[20];

    printf("Masukkan tanggal lahir Anda (tanggal-bulan-tahun): ");
    scanf("%d-%d-%d", &tanggal, &bulan, &tahun);

    for(i = 0; i < 12; i++) {
        if((bulan == zodiak[i].mulai_bulan && tanggal >= zodiak[i].mulai_tanggal) || (bulan == zodiak[i].akhir_bulan && tanggal <= zodiak[i].akhir_tanggal)) {
            strcpy(zodiak_anda, zodiak[i].nama);
            break;
        }
    }

    printf("Tanggal Lahir Anda [%d-%d-%d]: %d-%d-%d\n", tanggal, bulan, tahun, tanggal, bulan, tahun);
    printf("Zodiak Anda Adalah: %s\n", zodiak_anda);

    return 0;
}