#include <stdio.h>

int main()
{
    int n1, n2, soma;
    printf("Digite dois valores:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    soma=n1+n2;
    printf("\n%d + %d = %d.", n1, n2, soma);
    return 0;
}
