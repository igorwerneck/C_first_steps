#include <stdio.h>

int main()
{
    int number;
    int soma=0;
    int cont=0;
    float media;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &number);
    while (number!=0)
    {
        cont=cont+1;
        soma=soma+number;
        printf("Digite o proximo numero:\n");
        scanf("%d", &number);

    }
    media=soma/(float)cont;
    printf("A media dos numeros lidos foi: %.2f.", media);
    return 0;
}
