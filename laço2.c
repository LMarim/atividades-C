#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale (LC_ALL,"");
    int num[5], i, par=0, impar=0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d� n�mero:", i+1);
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }

    }
    printf("tem no total %d n�meros pares\n", par);
    printf("tem no total %d n�meros impares\n", impar);

    return 0;
}