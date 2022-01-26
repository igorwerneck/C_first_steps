#include <stdio.h>

void CheckPrime (int number)
{
    int count=0;

    for(int i=2; i<number;i++)
    {
        if (number%i==0)
        {
            count++;
            break;
       }
    }
    if (count!=0)
            {
                printf("Not a prime number.\n");
            }
        else
        {
            printf("Prime number.\n");
        }
}
int main()
{
    int num;
    printf("Type a positive integer:\n");
    scanf("%d", &num);
    CheckPrime(num);
    return 0;
}
