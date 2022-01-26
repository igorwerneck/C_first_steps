#include <stdio.h>

void Divisby2and3 (int x)
{
    if (x % 2 == 0 && x % 3 == 0 && x % 5 != 0)
    {
        printf("O numero e divisivel por 2 e por 3, mas nao e divisivel por 5.\n");
    }
    else
    {
        printf("O numero nao e divisivel por 2 e por 3 ou e divisivel por 5.\n");
    }
}
int main()
{
    int a;
    printf("Digite um valor inteiro. Vamos checar se ele e divisivel por 2 e por 3, mas nao por 5:\n");
    scanf("%d", &a);
    Divisby2and3(a);
    return 0;
}
