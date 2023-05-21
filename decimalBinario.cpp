#include <stdio.h>
#include <stdlib.h>

void decimalBinario()
{
    int decimal_number;
    int binary[65];
    int index = 0;

    system("cls");

    printf("imforme o numero em decimal: ");
    scanf("%d",&decimal_number);

    if (decimal_number == 0) {
        printf("Binario: 0\n");
        return;
    }

    while (decimal_number > 0) {
        binary[index] = decimal_number % 2;
        decimal_number /= 2;
        index++;
    }

    system("cls");
    printf("O valor em binaro do numero %d e ", decimal_number);
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    system("pause");


}