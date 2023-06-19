#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct ficha_aluno
{
    char nome[250];
    int matricula;
    float nota[3];
    float media;
};

float mediaTotal(float nota[])
{
    float media, somanota = 0;
    int i;
    for (i = 0; i < 3; i++)
    {
        somanota += nota[i];
    }
    media = somanota / 3;

    return media;
}
void resultado(float media){
    if (media >= 6)
    {
        printf("Aprovado!");
    }else
    {
        printf("Reprovado!");
    }
    
    
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct ficha_aluno aluno[5];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("digite o nome do %d° aluno:\n", i + 1);
        gets(aluno[i].nome);

        printf("Digite sua matricula: ");
        scanf("%d", &aluno[i].matricula);
        
        for (j = 0; j < 3; j++)
        {
            printf("Digite sua %dª nota: ", j + 1);
            scanf("%f", &aluno[i].nota[j]);
        
       }
        fflush(stdin);
       system("cls");
       
        aluno[i].media = mediaTotal(aluno[i].nota);
        
    }

    for (i = 0; i < 5; i++)
    {
        printf("Nome do %dº aluno: %s\n", i + 1, aluno[i].nome);
        printf("Matricula de %s: %d\n", aluno[i].nome, aluno[i].matricula);
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%dª nota: %.1f\n", j + 1, aluno[i].nota[j]);
        }
        printf("Média: %.1f \n\n", aluno[i].media);
       resultado(aluno[i].media);
       printf("\n");
    }
}