#include <stdio.h>

int main()
{
    int t1=1, t2=1, n;
    int nextt;
    nextt=t1 + t2;

    printf("Type the number of terms:\n");
    scanf("%d", &n);
    printf("The Fibonacci sequence for %d terms is: %d, %d, ", n, t1, t2);

    for (int i=3; i<=n;i++)
    {
        printf("%d, ", nextt);
        t1=t2;
        t2=nextt;
        nextt=t1+t2;

    }
    return 0;
}
