#include <stdio.h>

int main()
{
    int number, factorial=1, i=1;

    printf("Type an integer:\n");
    scanf("%d", &number);
    if (number<0)
    {
        printf("There is no factorial of negative numbers!\n");
        return 0;
    }
    if (number==0)
    {
        printf("Factorial of %d is 1.\n", number);
        return 0;
    }
        for(i=1;i<=number;i++)
        {
            factorial=factorial*i;
        }
        printf("The factorial of %d is: %d.\n", number, factorial);
        return 0;
}
