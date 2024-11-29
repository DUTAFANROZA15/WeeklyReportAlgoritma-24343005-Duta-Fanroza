#include <stdio.h>
#include <string.h>

int main() {
    char username[50], password[50];
    char username_benar[] = "DUTA FANROZA";
    char password_benar[] = "150805";

    printf("=== HALAMAN LOGIN ===\n");

    printf("Masukkan username: ");
    fgets(username, sizeof(username), stdin); 
    username[strcspn(username, "\n")] = '\0';

    printf("Masukkan password: ");
    scanf("%s", password);

    if (strcmp(username, username_benar) == 0 && strcmp(password, password_benar) == 0) {
        printf("\nBerhasil login\n");
    } else {
        printf("\nPassword atau username salah\n");
    }

    return 0;
}