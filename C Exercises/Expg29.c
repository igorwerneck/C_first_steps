/*Calcular e apresentar o volume de uma lata de ´oleo, utilizando a
f´ormula volume = 3:14159 ∗ raio ∗ raio ∗ altura.*/

#include <stdio.h>

int main()

{
    #define pi 3.14159
    float raio, altura, v;

    printf("\t\tALGORITMO DE CALCULO DE VOLUME (LATA DE OLEO)\n\n");
    printf("Digite o raio da lata:\n");
    scanf("%f", &raio);
    printf("Digite a altura da lata:\n");
    scanf("%f", &altura);
    v=pi*raio*raio*altura;
    printf("O volume sera de %.2f", v);
    return 0;

}
