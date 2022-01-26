#include <stdio.h>

int main()
{
    int number;
    int count;
    count=0;

    do
       {
        printf("Digite um numero:\n");
        scanf("%d", &number);
        printf("%d ao quadrado = %d.\n", number, number*number);
        count=1+count;
       }
    while(count<100 && number!=0);
        return 0;
}
