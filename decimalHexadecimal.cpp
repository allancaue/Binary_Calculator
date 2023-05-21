#include <stdio.h>
#include <stdlib.h>

void decimalHexadecimal()
{
    int decimal_number;
    char hexadecimal[16];
    int index = 0;

    system("cls");

    printf("imforme o numero em decimal: ");
    scanf("%d",&decimal_number);

    if (decimal_number == 0) {
        printf("Hexadecimal: 0\n");
        return;
    }

    while (decimal_number > 0) {
        int resto = decimal_number % 16;
        if (resto < 10) {
            hexadecimal[index] = resto + '0';
        } else {
            hexadecimal[index] = resto + 'A' - 10;
        }
        decimal_number /= 16;
        index++;
    }

    system("cls");
    printf("O valor em Hexadecimal do numero %d e ", decimal_number);
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }
    printf("\n");

    system("pause");
}