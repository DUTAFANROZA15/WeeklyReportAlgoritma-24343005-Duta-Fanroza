#include <stdio.h>

int main() {
    int i;

    printf("\n=== PROGRAM DERET BILANGAN GENAP DAN GANJIL ===\n\n");
    printf("DERET BILANGAN GENAP (0-50):\n");
    for (i = 0; i <= 50; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n\nDERET BILANGAN GANJIL (0-50):\n");
    for (i = 0; i<= 50; i++) {
            if(i % 2 != 0) {
                printf("%d ", i);
            }
    }
    printf ("\n");

    return 0;
}
    
