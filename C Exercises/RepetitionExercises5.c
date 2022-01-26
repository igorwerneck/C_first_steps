#include <stdio.h>

void Intervals (int a, int b)
{
    int x;

    for(x = a; x <= b; x++)
    {
        printf("%d\n", x);
    }
}
int main()
{
    int Va, Vb;
    printf("Digite o valor inicial:\n");
    scanf("%d", &Va);
    printf("Digite o valor final:\n");
    scanf("%d", &Vb);
    Intervals(Va, Vb);
    return 0;
}
