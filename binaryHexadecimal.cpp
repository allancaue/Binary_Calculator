#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void binaryHexadecimal()
{
    int binary_namber;
    char hexadecimal[17];
    int index = 0;

    system("cls");

    printf("imforme o numero em binario: ");
    scanf("%d",&binary_namber);

    while (binary_namber > 0) {
        int group = 0;
        int exponent = 0;

 
        while (exponent < 4) {
            int digito = binary_namber % 10;
            group += digito * pow(2, exponent);
            exponent++;
            binary_namber /= 10;
        }

        if (group < 10)
            hexadecimal[index] = group + '0';
        else
            hexadecimal[index] = group - 10 + 'A';

        index++;
    }

    hexadecimal[index] = '\0';

    int start = 0;
    int end = index - 1;
    while (start < end) {
        char temp = hexadecimal[start];
        hexadecimal[start] = hexadecimal[end];
        hexadecimal[end] = temp;
        start++;
        end--;
    }

    system("cls");
    printf("O valor em Hexadecimal e ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }
    printf("\n");

    system("pause");

}
