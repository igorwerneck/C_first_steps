#include <stdio.h>

int main()
{
    int num, cont;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);
    cont=0;
    while (num!=0)
    {
        cont=cont+1;
        printf("Digite o proximo numero:\n");
        scanf("%d", &num);
    }
    printf("Foram lidos %d numeros.", cont);
    return 0;
}
