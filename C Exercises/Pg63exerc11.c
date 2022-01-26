/* Desenvolver um algoritmo que possibilite, dado um conjunto de valores inteiros e positivos (fornecidos um a um pelo usuario), determinar
qual o menor valor deste conjunto. O final do conjunto de valores e conhecido atravees do valor zero, que nao deve ser considerado. */

#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, cont;
    int i [10];
    int k [10];
    cont=0;
    do
    {
    printf("Digite um valor inteiro e positivo:\n");
    scanf("%d", &x);
    printf("Digite o valor seguinte:\n");
    scanf("%d", &y);
        if (x<0)
        {
            printf("Valor incorreto. Digite apenas valores inteiros e positivos!");
        }
    cont=cont + 0;
            if (x<y)
            {
            x=i;
            }
            if (y<x)
            {
            y=k;
            }

    }while (x>0);
        for (int z=i; z<=i; z++)
    {
        printf("%d", i);
    }
}
