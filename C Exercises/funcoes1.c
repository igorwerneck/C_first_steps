#include <stdio.h>

/*Escrever uma funçao para receber a idade de uma pessoa em dias e
imprimir essa idade expressa em anos, meses e dias*/

int idadeamd (int dias1)
{
    int anos;
    int meses;
    int dias2;
    anos=dias1/365;
    meses=(dias1 - anos*365)/30;
    dias2=(dias1 - anos*365 - meses*30);
    printf("Anos = %d\n", anos);
    printf("Meses = %d\n", meses);
    printf("Dias = %d\n", dias2);
}
int main()
{

int numero;
printf("Digite um numero de dias qualquer:\n");
scanf("%d", &numero);
idadeamd(numero);
return 0;
}
