#include <stdio.h>

void Oddnumbers (int a1, int a2)
{
    int x;
    x=0;
    if (a1<a2)
    {
        for(x=a1; x<=a2; x++)
        {
                if (x%2!=0){
                printf("%d\n", x);}

        }

    }
    if (a1>a2)
    {
        for(x=a2; x<=a1; x++)
        {
                if (x%2!=0){
                printf("%d\n", x);}

        }
    }
}

int main()
{
    int num1, num2;
    printf("Type two integers:\n");
    scanf("%d %d", &num1, &num2);
    Oddnumbers(num1, num2);
    return 0;
}
