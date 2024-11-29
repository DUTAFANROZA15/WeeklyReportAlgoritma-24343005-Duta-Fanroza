#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nomor_komputer, tebakan, jumlah_percobaan;
    char pilihan;

    srand(time(NULL));

    printf("\n=== Selamat Datang di Game Tebak Nomor! ===\n");
    printf("Komputer akan memilih nomor acak antara 1 dan 20.\n");
    printf("Tugas Anda adalah menebak nomor tersebut.\n");

    do {
        nomor_komputer = (rand() % 20) + 1;
        jumlah_percobaan = 0;
        printf("\nSaya telah memilih nomor, coba tebak!\n");

        do {
            printf("Masukkan tebakan Anda: ");
            scanf("%d", &tebakan);
            jumlah_percobaan++;

            if (tebakan < nomor_komputer) {
                printf("Nomor saya lebih besar!\n");
            } else if (tebakan > nomor_komputer) {
                printf("Nomor saya lebih kecil!\n");
            } else {
                printf("Selamat, Anda benar! Nomornya adalah %d.\n", nomor_komputer);
                printf("Anda membutuhkan %d percobaan untuk menebak dengan benar.\n", jumlah_percobaan);
            }
        } while (tebakan != nomor_komputer);

        printf("Apakah Anda ingin bermain lagi? (y/n): ");
        scanf("%c", &pilihan);
    } while (pilihan == 'y' || pilihan == 'Y');

    printf("Terima kasih telah bermain! Sampai jumpa.\n");

    return 0;
}