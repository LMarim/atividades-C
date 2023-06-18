#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

struct ficha
{
    char nome[250];
    int idade;
    float peso;
    float altura;
};

int main()
{
setlocale(LC_ALL,"portuguese");
    struct ficha pessoa[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("digite seu nome:\n");
        gets(pessoa[i].nome);

        printf("Digite sua idade:\n");
        scanf("%d",&pessoa[i].idade);

        printf("Digite seu peso:\n");
        scanf("%f", &pessoa[i].peso);

        printf("Digite sua altura:\n");
        scanf("%f", &pessoa[i].altura);

        fflush(stdin);
      
        system("cls");
    }

    for (i = 0; i < 5; i++)
    {
        printf("Nome da %dª pessoa: %s\n", i+1, pessoa[i].nome);
        printf("Idade de %s: %d\n", pessoa[i].nome, pessoa[i].idade);
        printf("Altura de %s: %.1f\n", pessoa[i].nome, pessoa[i].altura);
        printf("Peso de %s: %.1f\n",pessoa[i].nome,pessoa[i].peso);
        printf("--------------------------------\n");
    }

    return 0;
}
