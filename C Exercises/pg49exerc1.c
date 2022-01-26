#include <stdio.h>

int main()
{
int a, b;
printf("Digite dois numeros inteiros:\n");
scanf("%d %d", &a, &b);
if (a>b)
{
    printf("%d e maior que %d.\n", a, b);
}
if (a<b)
{
    printf("%d e menor que %d.\n", a, b);
}
if (a==b)
{
    printf("%d e igual a %d.\n", a, b);
}
return 0;
}

