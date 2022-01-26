#include <stdio.h>

int main()
{
    float x, y, a, b;
    printf("Sabemos que A = X + Y e B = X - Y\n");
    printf("Digite um valor para X e outro para Y:\n");
    scanf("%f %f", &x, &y);
    a=x+y;
    b=x-y;
    printf("Logo, temos que A = %.2f + %.2f\n", x, y);
    printf("E temos que B = %.2f - %.2f\n", x, y);
    printf("Portanto, A = %.2f e B = %.2f", a, b);
    return 0;

}
