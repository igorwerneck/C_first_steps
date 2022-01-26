/* Fazer um algoritmo para gerar e imprimir o resultado de H = 1 +
1=2 + 1=3 + 1=4 + 1=5*/

#include <stdio.h>

int main()

{
int a = 1, b = 2, c = 3, d = 4, e = 5;
float h = 0.0;

h=(float)a/b+(float)a/c+(float)a/d+(float)a/e+a;
printf("%f", h);
}
