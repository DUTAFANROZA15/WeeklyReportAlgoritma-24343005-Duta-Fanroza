#include <stdio.h>

int main (){
    // Deklarasi variabel
    float celcius,kelvin,fahrenheit,reamur;

    // Input suhu dalam celcius
    printf("Masukkan suhu dalam celcius: ");
    scanf("%f", &celcius);

    // Mengkonversi suhu celcius ke kelvin,fahrenheit,dan reamur 
    kelvin = celcius + 273.15;
    fahrenheit = (celcius * 1.8) + 32;
    reamur = celcius * 0.8;

    // Output konversi suhu 
    printf("Input Suhu (Celcius) = %.2f\n", celcius);
    printf("Suhu dalam Kelvin = %.2f\n", kelvin);
    printf("Suhu dalam Fahrenheit = %.2f\n", fahrenheit);
    printf("Suhu dalam Reamur = %.2f\n", reamur);

    return 0;
}