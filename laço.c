#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int cont;
float soma,nota,media;
char reposta[10];

printf("Deseja digitar uma nota?\n");
scanf("%s",&reposta);
system("cls");


do
{
    printf("Digite uma nota: ");
    scanf("%f",&nota);

    soma += nota;
    cont++;
fflush(stdin);

    printf("Deseja digitar uma nota?\n");
scanf("%s",&reposta);

    system("cls");

}while (strcmp(reposta,"sim") == 0);
media = soma / cont;

printf("Media: %.f",media);
}