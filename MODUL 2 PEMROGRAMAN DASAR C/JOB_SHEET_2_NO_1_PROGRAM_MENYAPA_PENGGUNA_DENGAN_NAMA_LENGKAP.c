#include <stdio.h>

int main(){
    // Deklarasi variabel 
    char nama[100];

    // Menampilkan pertanyaan kepada pengguna
    printf(" Hello,siapa nama lengkapmu?\n ");

    // Input nama lengkap pengguna
    printf("Masukkan nama lengkap: ");
    fgets(nama, sizeof(nama), stdin);

    // Output selamat datang kepada pengguna
    printf("Selamat Datang %s dalam Pemrograman C!\n", nama);

    return 0;
}