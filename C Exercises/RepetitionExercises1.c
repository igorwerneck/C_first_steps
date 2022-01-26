#include <stdio.h>

int main()
{
    int num, soma, quadrado;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);
    soma=0;
    while (num!=0)
    {
        quadrado=num*num;
        soma=soma+num+quadrado;
        printf("O quadrado de %d foi calculado em: %d.\n", num, quadrado);
        printf("Digite o proximo numero:\n");
        scanf("%d", &num);
    }
    printf("A soma dos numeros foi calculada em: %d.\n", soma);
    return 0;
}
