#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void hexadecimalBinary()
{
    char hexadecimal[20];

    system("cls");
    printf("Digite um número hexadecimal: ");
    scanf("%s", hexadecimal);

    int size = strlen(hexadecimal);
    char *binary = (char *)malloc((4 * size + 1) * sizeof(char));
    binary[4 * size] = '\0';

    for (int i = 0; i < size; i++) {
        char digit = hexadecimal[i];
        int decimal;

        if (digit >= '0' && digit <= '9') {
            decimal = digit - '0';
        } else if (digit >= 'A' && digit <= 'F') {
            decimal = digit - 'A' + 10;
        } else if (digit >= 'a' && digit <= 'f') {
            decimal = digit - 'a' + 10;
        } else {
            free(binary);
            printf("Digite um número hexadecimal válido.\n");
            system("pause");
            return;
        }

        for (int j = 3; j >= 0; j--) {
            binary[4 * i + j] = (decimal % 2) + '0';
            decimal /= 2;
        }
    }

    system("cls");
    printf("O valor binário de %s é %s\n", hexadecimal, binary);
    free(binary);

    system("pause");

}