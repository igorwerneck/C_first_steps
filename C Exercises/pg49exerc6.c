#include <stdio.h>

void Valid (float a, float b)
{
    if (a>0 && b>0)
    {
        printf("Os valores sao validos.\n");
    }
    else
    {
        printf("Valores invalidos.\n");
    }
}
int main()
{
    float a, b;

    printf("Digite dois valores:\n");
    scanf("%f %f", &a, &b);
    Valid(a, b);
    return 0;
}
