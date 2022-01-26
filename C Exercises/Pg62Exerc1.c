#include <stdio.h>

int main()
{
    int number;
    for(number = 1; number <=3456; number++)
    {
        if (number%6==0)
            {
            printf("%d\n", number);
            }
    }
    return 0;
}
