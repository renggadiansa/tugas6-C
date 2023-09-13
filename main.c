#include <stdio.h>

int main() {
    //1
    int hari;

    printf("Masukkan angka 1-7: ");
    scanf("%d", &hari);

    switch (hari) {
        case 1:
            printf("Minggu\n");
            break;
        case 2:
            printf("Senin\n");
            break;
        case 3:
            printf("Selasa\n");
            break;
        case 4:
            printf("Rabu\n");
            break;
        case 5:
            printf("Kamis\n");
            break;
        case 6:
            printf("Jumat\n");
            break;
        case 7:
            printf("Sabtu\n");
            break;
        default:
            printf("Hari tidak valid\n");
            break;
    }

    //2
    int valid_operator = 1;
    char operator;
    float number1, number2, result;

    printf("Masukkan 2 buah bilangan & sebuah operator\n");
    printf("dengan format : number1 operator number2\n\n");
    scanf("%f %c %f", &number1, &operator, &number2);

    switch (operator) {
        case '*':
            result = number1 * number2;
            break;
        case '/':
            result = number1 / number2;
            break;
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        default:
            valid_operator = 0;
            break;
    }

    if (valid_operator)
        printf("\n%g %c %g is %g\n", number1, operator, number2, result);
    else
        printf("Invalid operator!\n");

    //3
    int pilihan;
    float sisi, jari_jari, tinggi, volume, luas;

    printf("Menu:\n");
    printf("1. Menghitung volume kubus\n");
    printf("2. Menghitung luas lingkaran\n");
    printf("3. Menghitung volume silinder\n");
    printf("Pilih menu (1/2/3): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Masukkan panjang sisi kubus: ");
            scanf("%f", &sisi);
            volume = sisi * sisi * sisi;
            printf("Volume kubus = %.2f\n", volume);
            break;
        case 2:
            printf("Masukkan panjang jari-jari lingkaran: ");
            scanf("%f", &jari_jari);
            luas = 3.14 * jari_jari * jari_jari;
            printf("Luas lingkaran = %.2f\n", luas);
            break;
        case 3:
            printf("Masukkan panjang jari-jari lingkaran: ");
            scanf("%f", &jari_jari);
            printf("Masukkan tinggi silinder: ");
            scanf("%f", &tinggi);
            volume = 3.14 * jari_jari * jari_jari * tinggi;
            printf("Volume silinder = %.2f\n", volume);
            break;
        default:
            printf("Pilihan tidak valid\n");
            break;
    }
    return 0;
}
