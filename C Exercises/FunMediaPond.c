#include <stdio.h>

/* Escrever um procedimento para receber tres notas de um aluno
e imprimir a media ponderada. Considerar como peso das notas os
seguintes valores: 2, 3, 5*/

void MediaPond (float nota1, float nota2, float nota3)
{
    float Media;
    Media=(nota1*2 + nota2*3 + nota3*5)/10;
    printf("A media ponderada do(a) aluno(a) foi de: %.2f.\n", Media);
}
int main()
{
float a, b, c;
printf("Digite as tres notas do(a) aluno(a):\n");
scanf("%f %f %f", &a, &b, &c);
MediaPond(a, b, c);
return 0;

}
