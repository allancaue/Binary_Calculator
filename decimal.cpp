#include <stdio.h>
#include <stdlib.h>

void decimalBinario();

void decimal()
{
    int option;
    bool repetition = true;

    do
    {
        system("cls");
        printf("===CUALCULADORA===\n\n1 - Binario\n2 - Hexadecimal\n3 - Sair\n\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            decimalBinario();
            break;
        case 2:
            //Hexadecimal
            break;
        case 3:
            repetition = false;
            return;
        default:
            printf("Opicao invalida\n");
            system("pause");
        }
    }while(repetition == true);

}