#include <stdio.h>

void Divisby2 (int x)
{
if (x % 2 == 0)
{
    printf("%d e divisivel por 2.\n", x);
}
else
{
    printf("%d nao e divisivel por 2.\n", x);
}
}

int main()
{
    int a;
    printf("Digite um numero inteiro. Vamos checar se ele e divisivel por 2:\n");
    scanf("%d", &a);
    Divisby2(a);
return 0;
}
