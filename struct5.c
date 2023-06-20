#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

struct ficha_aluno
{
    char nome[250];
    int matricula;
    float nota[3];
    float media;
};

void resultado(float media)
{
    if (media >= 6)
    {
        printf("Aprovado!");
    }
    else
    {
        printf("Reprovado!");
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct ficha_aluno aluno[5];
    int i, j;
    float maiorNota , maiorMedia , menorMedia;

    for (i = 0; i < 3; i++)
    {
        printf("digite o nome do %d° aluno:\n", i + 1);
        gets(aluno[i].nome);
        
        fflush(stdin);

        printf("Digite sua matricula: ");
        scanf("%d", &aluno[i].matricula);

        for (j = 0; j < 3; j++)
        {
            printf("Digite sua %dª nota: ", j + 1);
            scanf("%f", &aluno[i].nota[j]);
         //calculando a media
         aluno[i].media += aluno[i].nota[j];
        }
        fflush(stdin);
        system("cls");
        //definindo a media
        aluno[i].media = (aluno[i].media/3);
    }
//definindo a maior nota
maiorNota = aluno[0].nota[0];
for ( i = 1; i < 3; i++)
{
  
    if (maiorNota < aluno[i].nota[0])
    {
        maiorNota = aluno[i].nota[0];
    }
    
}
//definindo maior e menor media
maiorMedia = aluno[0].media;
menorMedia = aluno[0].media;
for ( i = 1; i < 3; i++)
{
    if (aluno[i].media > maiorMedia)
    {
        maiorMedia = aluno[i].media;
    }
    if (aluno[i].media < menorMedia)
    {
        menorMedia = aluno[i].media;
    }
    
    
}

    for (i = 0; i < 3; i++)
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
    printf("\n \n");
    printf("A maior nota da primeira prova foi: %.1f\n",maiorNota);
    printf("A maior média foi: %.1f\n",maiorMedia);
    printf("A menor média foi: %.1f\n",menorMedia);
    return 0;
}
