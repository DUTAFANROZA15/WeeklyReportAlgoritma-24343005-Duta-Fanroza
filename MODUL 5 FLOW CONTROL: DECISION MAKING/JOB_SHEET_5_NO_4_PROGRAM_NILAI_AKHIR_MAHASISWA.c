#include <stdio.h>

int main() {
    float kehadiran, tugas, uts, uas, nilai_akhir;

    printf("=== PROGRAM NILAI AKHIR MAHASISWA ===\n");
    printf("Masukkan nilai kehadiran (0-100): ");
    scanf("%f", &kehadiran);
    printf("Masukkan nilai tugas (0-100): ");
    scanf("%f", &tugas);
    printf("Masukkan nilai UTS (0-100): ");
    scanf("%f", &uts);
    printf("Masukkan nilai UAS (0-100): ");
    scanf("%f", &uas);

    nilai_akhir = (kehadiran * 0.20) + (tugas * 0.20) + (uts * 0.25) + (uas * 0.35);

    printf("Nilai Akhir: %.2f\n", nilai_akhir);

    if(nilai_akhir >= 0 && nilai_akhir <= 44) {
        printf("Grade: E\n");
        printf("Maaf, Anda tidak lulus!\n");
    } else if (nilai_akhir >= 45 && nilai_akhir <= 55) {
        printf("Grade: D\n");
        printf("Maaf, Anda tidak lulus!\n");
    } else if (nilai_akhir >= 56 && nilai_akhir <= 65) {
        printf("Grade: C\n");
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
    } else if (nilai_akhir >= 66 && nilai_akhir <= 75) {
        printf("Grade: B-\n");
        printf("Anda lulus dengan baik,tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 76 && nilai_akhir <= 80) {
        printf("Grade: B\n");
        printf("Anda lulus dengan baik,tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 81 && nilai_akhir <= 85) {
        printf("Grade: B+\n");
        printf("Anda lulus dengan baik,tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 86 && nilai_akhir <= 90) {
        printf("Grade: A-\n");
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else if (nilai_akhir >= 91 && nilai_akhir <= 100) {
        printf("Grade: A\n");
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else {
        printf("Nilai tidak valid.Silahkan masukkan nilai antara 0-100.\n");
    }

    return 0;
}