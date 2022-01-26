#include <stdio.h>>

int main()

{
    #define carnepess 0.400
    float carneppess, carnetot, carnerest;
    int pessoas;

    printf("\t\tAPLICATIVO PARA CALCULO DE CARNE NO CHURRASCO (2021)\n\n");
    printf("Para iniciar, digite o numero de pessoas que irao participar do churrasco:\n");
    scanf("%d", &pessoas);
    printf("Digite, agora, a quantidade, em KG, de carne que cada pessoa vai levar:\n");
    scanf("%f", &carneppess);
    carnetot=pessoas*carneppess;
    printf("Seu churrasco tera %.2f KG de carne no total.\n", carnetot);
    carnerest=carnetot-(carnepess*pessoas);
    printf("Ao final do churrasco, voce ainda tera %.2f KG de carne sobrando.", carnerest);
    return 0;

}
