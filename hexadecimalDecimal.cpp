#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void hexadecimalDecimal()
{
    char hexadecimal[10];
    int size;
    int decimal = 0;

    system("cls");

    printf("Informe o número em hexadecimal: ");
    scanf("%s", hexadecimal);

    size = strlen(hexadecimal);

    for (int i = size - 1; i >= 0; i--) {
        char digito = hexadecimal[i];

        if (digito >= '0' && digito <= '9') {
            decimal += (digito - '0') * pow(16, size - 1 - i);
        } else if (digito >= 'A' && digito <= 'F') {
            decimal += (digito - 'A' + 10) * pow(16, size - 1 - i);
        }
    }

    system("cls");
    printf("O valor decimal de %s é %d\n", hexadecimal, decimal);

    system("pause");
}
