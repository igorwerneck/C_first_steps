#include <stdio.h>

void PrimeNumberCheck (int number)
{
    int count;
    count=0;
    for(int i=2; i<number; i++)
    {
        if (number%i==0)
        {
            count++;
        break;
        }
    }
            if (count!=0)
            {
                printf("%d is not a prime number.\n", number);
            }

            else
            {
                printf("%d is a prime number.\n", number);
            }

}

int main()
{
    int num;

    printf("\t\t PRIME NUMBER IDENTIFICATOR (2022)\n\n");
    printf("Type a positive integer:\n");
    scanf("%d", &num);
    PrimeNumberCheck(num);
    return 0;
}
