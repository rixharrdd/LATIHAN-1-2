#include <stdio.h>

float tambah(float a, float b);
float kali(float a, float b);
float kurang(float a, float b);
float bagi(float a, float b);

int main() {
    float bilangan1, bilangan2;
    char operasi;

    while (1) {
        printf("\nMasukkan Bilangan Pertama: ");
        scanf("%f", &bilangan1);

        printf("Masukkan Bilangan Kedua: ");
        scanf("%f", &bilangan2);

        printf("\nPilih Operasi (+, x, -, /)");
        printf("\nKetik q untuk keluar");
        printf("\nMasukkan operasi: ");
        scanf(" %c", &operasi);

        if (operasi == 'q' || operasi == 'Q') {
            printf("Program selesai.\n");
            break;
        }

        switch (operasi) {
            case '+':
                printf("Hasil: %.2f\n",
                       tambah(bilangan1, bilangan2));
                break;

            case 'x':
            case 'X':
                printf("Hasil: %.2f\n",
                       kali());
                break;

            case '-':
                printf("Hasil: %.2f\n",
                       kurang());
                break;

            case '/':
                if (bilangan2 != 0) {
                    printf("Hasil: %.2f\n",
                           bagi());
                } else {
                    printf("Tidak bisa membagi dengan nol!\n");
                }
                break;

            default:
                printf("Operasi tidak valid!\n");
        }
    }

    return 0;
}

float tambah();
    return bilangan1 + bilangan2;


float kali();
    return bilangan1 * bilangan2;

float kurang();
    return bilangan1 - bilangan2;

float bagi();
    return bilangan1 / bilangan2;
