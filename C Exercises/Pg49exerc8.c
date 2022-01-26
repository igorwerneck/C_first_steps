#include <stdio.h>

void Iftriangle (float x, float y, float z)
{
    if (x<y+z && y<x+z && z<x+y)
    {
        printf("Os comprimentos formam um triangulo:\n");
    }
    else
    {
        printf("Os comprimentos nao formam um triangulo.\n");
    }
}
int main()
{
   float a, b, c;

   printf("Digite um comprimento x:\n");
   scanf("%f", &a);
   printf("Digite um comprimento y:\n");
   scanf("%f", &b);
   printf("Digite um comprimento z:\n");
   scanf("%f", &c);
   Iftriangle(a, b, c);
   return 0;

}
