#include <stdio.h>

int main()
{
    int a, b;

    printf("Digite dois valores inteiros:\n");
    scanf("%d %d", &a, &b);
    if (b==0)
    {
        printf("%d / %d = erro! Impossivel dividir por zero.\n", a, b);
    }
    else
    {
        printf("%d/%d = %d.\n", a, b, a/b);
    }
    return 0;

}
