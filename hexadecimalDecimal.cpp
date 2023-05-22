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
        char digit = hexadecimal[i];

        if (digit >= '0' && digit <= '9') {
            decimal += (digit - '0') * pow(16, size - 1 - i);
        } else if (digit >= 'A' && digit <= 'F') {
            decimal += (digit - 'A' + 10) * pow(16, size - 1 - i);
        } else if (digit >= 'a' && digit <= 'f') {
            decimal = digit - 'a' + 10 * pow(16, size - 1 - i);
        } else {
            printf("Digite um número hexadecimal válido.\n");
            system("pause");
            return;
        }
    }

    system("cls");
    printf("O valor decimal de %s é %d\n", hexadecimal, decimal);

    system("pause");
}
