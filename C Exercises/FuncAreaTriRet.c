#include <stdio.h>

void AreaTriRet (float base, float altura)
{
float area;
area=(base*altura)/2;
printf("A area calculada do triangulo retangulo foi de: %.2f.\n", area);

}
int main()
{


float base, altura;
printf("Digite o valor da base do triangulo retangulo:\n");
scanf("%f", &base);
printf("Digite o valor da altura do triangulo retangulo:\n");
scanf("%f", &altura);
AreaTriRet(base, altura);
return 0;
}
