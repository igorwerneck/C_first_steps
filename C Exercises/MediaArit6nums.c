#include <stdio.h>

int main()

{
    float a, b, c, d, e, f, media;

    printf("\t\t ALGORITMO DE CALCULO - MEDIA ARITMETICA (NUMEROS REAIS)\n\n");
    printf("Digite seis valores reais:\n");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f); /*Para multiplos valores em um scanf, nao separar os codigos de impressao por v�rgula!!
                                                        n�o esquecer nunca de usar "&" antes das vari�veis.*/
    media=(a+b+c+d+e+f)/6;
    printf("A media dos numeros reais inseridos foi calculada em: %.2f.", media);
    return 0;

}
