#include <stdio.h>

int main () {
    // Pertanyaan A
    printf("Pertanyaan A\n");
    int Lesley = 57082;
    int Layla = Lesley;
    int Balmond = Layla + 1;

    printf("a) Nilai Layla = %d\n", Layla);
    printf("b) Nilai Balmond = %d\n", Balmond);

    // Pertanyaan B
    printf("\nPertanyaan B\n");
    int *Layla_ptr = &Lesley;
    int Balmond_B = *Layla_ptr + 1;

    printf("a) Nilai Layla = %p (alamat memori Lesley)\n", (void*)Layla_ptr);
    printf("b) Nilai Balmond = %d\n", Balmond_B);

    return 0;
}