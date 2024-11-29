#include <stdio.h>

void cek_saldo(int saldo) {
    printf("\nSaldo saat ini: Rp.%d\n", saldo);
}

void setor(int *saldo) {
    int jumlah;
    printf("\nMasukkan jumlah setoran: Rp. ");
    scanf("%d", &jumlah);
    *saldo += jumlah;
    printf("Setoran Berhasil.Saldo bertambah menjadi Rp.%d\n", *saldo);
}

void tarik(int *saldo) {
    int jumlah;
    printf("\nMasukkan jumlah penarikan: Rp. ");
    scanf("%d", &jumlah);

    if (*saldo - jumlah < 50000) {
        printf("Penarikan gagal.Saldo tidak boleh kurang dari Rp. 50.000.\n");
    } else {
        *saldo -= jumlah;
        printf("Penarikan berhasil.Saldo berkurang menjadi Rp. %d\n", *saldo);
    }
}

int main() {
    int pilihan;
    int saldo = 175000;

    printf("--------------------\n");
    printf("        ATM         \n");
    printf("--------------------\n");
    printf("No Rek:0123\n");
    printf("Nama Akun: Hattori\n");
    printf("Saldo Awal: Rp. %d\n", saldo);
    

    do {
        printf("\n === MENU ATM === \n");
        printf("1. Cek Saldo\n");
        printf("2. Setoran\n");
        printf("3. Penarikan Tunai\n");
        printf("4. Exit\n");
        printf("Pilih Menu (1-4): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                cek_saldo(saldo);
                break;

            case 2: 
                setor(&saldo);
                break;
            
            case 3:
                tarik(&saldo);
                break;
            
            case 4:
                printf("Terima kasih telah menggunakan ATM. Selamat tinggal!\n");
                break;
            default:
                printf("Pilihan tidak valid. Silahkan coba lagi.\n");
        }
    } while (pilihan != 4);

    return 0;
}