#include <stdio.h>

int somaintervalo (int n1, int n2)
{
    int x;
    int soma=0;

    if(n1<n2)
    {
        for(x=n1; x<=n2; x++)
        {
            soma=soma+x;
        }
    }
    if(n1>n2)
    {
        for(x=n2; x<=n1; x++)
        {
            soma=soma+x;
        }
    }
    return soma;
}
int main()
{
    int num1, num2, somanum;

    printf("Digite dois valores inteiros:\n");
    scanf("%d %d", &num1, &num2);
    somanum=somaintervalo(num1, num2);
    printf("A soma dos numeros entre os valores foi de: %d", somanum);
    return 0;
}
