#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void decimal();
void binary();

int main()
{
    setlocale(LC_ALL,"");

    int option;
    bool repetition = true;

    do
    {
        system("cls");
        printf("===CUALCULADORA===\n\n1 - Decimal para ...\n2 - Binario para ...\n3 - Hexadecimal para ...\n4 - Sair\n\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            decimal();
            break;
        case 2:
            binary();
            break;
        case 3:
            //hexadecimal
            break;
        case 4:
            repetition = false;
            return 0;
        default:
            printf("Opicao invalida\n");
            system("pause");
        }
    }while(repetition == true);

}
