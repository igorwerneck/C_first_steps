#include <stdio.h>

void PrimeChecks (int number)
{
    int count = 0;
    for(int i=2; i<number; i++)
    {
        if (number%i==0)
        {
            count++;

        }
        break;
    }
    if (count!=0)
    {
        printf("%d isn't a prime number.\n", number);
    }
    else
    {
        printf("%d is a prime number.\n", number);
    }

}

int main()
{
    int num;
    printf("Type a positive integer:\n");
    scanf("%d", &num);
    PrimeChecks(num);
    return 0;
}
