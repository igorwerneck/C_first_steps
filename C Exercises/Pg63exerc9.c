#include <stdio.h>
#include <math.h>

int main()
{
    float heightC, heightZ;
    int count=-1;
    int t=0;

    do
    {
    heightC=1.50 + (0.02)*t;
    heightZ=1.40 + (0.03)*t;
    t++;
    count=count+1;
    }while (heightZ<=heightC);
    printf("%d", count);
}
