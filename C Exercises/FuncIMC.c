#include <stdio.h>

void IMC (float peso, float altura)
{
float imc=peso/(altura*altura);
printf("\t\tSeu IMC foi calculado em: %.2f\n", imc);
}

int main()
{
    float peso, altura;
    printf("\t\tAPLICATIVO PARA CALCULO DE IMC (2021)\n");
    printf("Digite sua massa (em KG):\n");
    scanf("%f", &peso);
    printf("Digite sua altura (em M):\n");
    scanf("%f", &altura);
    IMC(peso, altura);
    printf("\t\t FAIXAS DE VALORES DO IMC:\n\n");
    printf("IMC abaixo de 18.5 = adulto com peso baixo.\n");
    printf("IMC maior ou igual a 18.5 e menor que 25.0 = peso adequado.\n");
    printf("IMC maior ou igual a 25.0 e menor que 30.0 = sobrepeso.\n");
    printf("IMC maior ou igual a 30.0 = adulto com obesidade.");
    return 0;
}
