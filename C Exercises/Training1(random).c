#include <stdio.h>

void PrimeChecker (int num)
{
    int count=0;
    if (num==0 || num<0)
        {
            printf("Can not check 0 or negative numbers.\n");
            return 0;
        }

    for (int x=2; x<num; x++)
    {
        if (num%x==0)
        {
            count++;
        }
        break;
    }
        if (count!=0)
        {
            printf("%d isn't a prime number.\n", num);
        }
        else
        {
            printf("%d is a prime number.\n", num);
        }
}



int main()
{
    int numx;

    printf("Type a positive integer:\n");
    scanf("%d", &numx);
    PrimeChecker(numx);
    while(numx>0)
    {
        printf("Type the next positive integer:\n");
        scanf("%d", &numx);
        PrimeChecker(numx);
    }
    return 0;
}
