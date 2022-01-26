#include <stdio.h>
#include <math.h>

float OneplusN (int n)
{

float S;
float soma=0;
int x=1;

    do
    {
        S=(float)1/x++;
        soma=soma+S;
    }while (x<=n);
    return soma;

}
int main()
{
    int num;
    float somatorio;

    printf("Type a positive integer:\n");
    scanf("%d", &num);
    printf("Let's calculate S=1+1/2+1/3...+ 1/n.\n");
    somatorio=OneplusN(num);
    printf("The result is: %.2f", somatorio);
    return 0;

}
