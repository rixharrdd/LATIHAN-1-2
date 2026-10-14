
#include <stdio.h>

// Global Variable
double bilangan1, bilangan2;
char operasi;

// Fungsi Input Bilangan
void inputBilangan() {
    printf("Masukkan bilangan pertama: ");
    scanf("%lf", &bilangan1);

    printf("Masukkan bilangan kedua: ");
    scanf("%lf", &bilangan2);
}

// Fungsi Penjumlahan
void penjumlahan() {
    printf("Hasil: %.2lf\n", bilangan1 + bilangan2);
}

// Fungsi Pengurangan
void pengurangan() {
    printf("Hasil: %.2lf\n", bilangan1 - bilangan2);
}

// Fungsi Perkalian
void perkalian() {
    printf("Hasil: %.2lf\n", bilangan1 * bilangan2);
}

// Fungsi Pembagian
void pembagian() {
    if (bilangan2 == 0) {
        printf("Error: Tidak bisa membagi dengan nol!\n");
    } else {
        printf("Hasil: %.2lf\n", bilangan1 / bilangan2);
    }
}

// Fungsi Utama
int main() {
    do {
        printf("\n=== KALKULATOR ===\n");

        inputBilangan();

        printf("\nPilih operasi:\n");
        printf("+  Penjumlahan\n");
        printf("-  Pengurangan\n");
        printf("*  Perkalian\n");
        printf("/  Pembagian\n");
        printf("0  Keluar\n");
        printf("Masukkan pilihan: ");
        scanf(" %c", &operasi);

        switch (operasi) {
            case '+':
                penjumlahan();
                break;

            case '-':
                pengurangan();
                break;

            case '*':
                perkalian();
                break;

            case '/':
                pembagian();
                break;

            case '0':
                printf("Program kalkulator selesai.\n");
                break;

            default:
                printf("Pilihan operasi tidak valid!\n");
                break;
        }

    } while (operasi != '0');

    return 0;
}
