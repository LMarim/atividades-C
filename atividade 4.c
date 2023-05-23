#include <stdio.h>
#include <stdlib.h>

int main() {

float nota[4];
float media,soma;
int idade,i;
char nome[100];

printf("Digite o seu nome\n");
scanf("%s",&nome);
printf("Digite sua idade\n");
scanf("%d",&idade);

for ( i = 1; i <= 4; i++)
{
    printf("Digite a %d nota: ",i);
    scanf("%f",&nota[i]);
soma = soma + nota[i];
}

system("cls");


media = soma / 4;

printf("Nome: %s\n",nome);
printf("Idade: %d\n",idade);

for ( i = 1; i <= 4; i++)
{
    printf("%d nota: %.f\n",i,nota[i]);
}
printf("media: %.f\n",media);



return (0);
system("pause");
}