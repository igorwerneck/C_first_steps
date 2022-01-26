#include <stdio.h>

int main()

{
    float n1, n2, soma;
    printf("Digite dois valores:\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    soma=n1+n2;
    printf("\n%f + %f = %f.", n1, n2, soma);
    return 0;
}
