#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option;
    bool repetition = true;

    do
    {
        printf("===CUALCULADORA===\n\n1 - Decimal para ...\n2 - Binario para ...\n3 - Hexadecimal para ...\n4 - Sair\n\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            //decimal
            break;
        case 2:
            //binario
            break;
        case 3:
            //hexadecimal
            break;
        case 4:
            repetition = false;
            return 0;
        default:
            printf("Opicao invalida");
        }
    }while(repetition == true);

}
