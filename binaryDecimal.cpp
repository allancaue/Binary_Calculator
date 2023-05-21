#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void binaryDecimal()
{
    int binary_namber;
    int decimal = 0;
    int index = 0;

    system("cls");

    printf("imforme o numero em binario: ");
    scanf("%d",&binary_namber);

    while (binary_namber > 0) {
        int digito = binary_namber % 10;
        decimal += digito * pow(2, index);
        index++;
        binary_namber /= 10;
    }

    system("cls");
    printf("O valor em decimal e %d\n", decimal);
    system("pause");

}