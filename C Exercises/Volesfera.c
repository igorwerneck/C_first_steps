#include <stdio.h>
#define PI 3.1415
/*Escrever uma função para receber por parametro o raio de uma esfera
e calcular o seu volume: V = (4*P I*R3)/3.*/

void Volesfera (float raio)
{
    float v;
    v=(4*PI*raio*raio*raio)/3;
    printf("O volume da esfera foi calculado em: %.2f.\n", v);

}
int main()
{
    float raio;

printf("Digite o valor do raio da esfera:\n");
scanf("%f", &raio);
Volesfera(raio);
return 0;

}
