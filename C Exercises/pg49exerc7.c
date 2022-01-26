#include <stdio.h>

float CalcIdealW (float height, char sex)
{
    float idealw, idealwf;
    idealw=72.7*height-58;
    idealwf=62.1*height-44.7;
    if (sex=='M')
    {
        return idealw;
    }
    else
    {
        return idealwf;
    }
}

int main()
{
    float altura, pesoideal;
    char sexo;

    printf("Digite seu sexo (M ou F):\n");
    scanf("%c", &sexo);
    printf("Digite sua altura, em metros:\n");
    scanf("%f", &altura);
    pesoideal=CalcIdealW(altura, sexo);
    printf("Seu peso ideal e: %f", pesoideal);
    return 0;
}
