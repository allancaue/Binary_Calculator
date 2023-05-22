#include <stdio.h>
#include <stdlib.h>

void hexadecimalDecimal();

void hexadecimal()
{
    int option;
    bool repetition = true;

    do
    {
        system("cls");
        printf("===CUALCULADORA===\n\n1 - Decimal\n2 - Binario\n3 - Sair\n\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            hexadecimalDecimal();
            break;
        case 2:
            //
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
