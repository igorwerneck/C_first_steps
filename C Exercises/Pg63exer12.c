#include <stdio.h>
#include <string.h>


int main()
{
    float C;
    int count;
    count=0;
    int F=50;

    for (F>=50; F<=150; F++)
    {
        C=(F-32)/1.8;
        count=count+1;
        printf("Para %d graus Fahrenheit, a Temperatura, em Celsius, foi calculada em:%.2f\n", F, C);

    }

}
