#include <stdio.h>
#include <math.h>



int main()
{
    float p, r, Aplica, a, c, Divida;
    int t=0;
    int b=0;
    int count;
    count=-1;

    printf("Digite o valor da renda aplicada e a taxa de juros (mensal):\n");
    scanf("%f%f", &p, &r);
    printf("Digite o valor da divida e a taxa de juros (mensal):\n");
    scanf("%f%f", &a, &c);

   do
    {

        Aplica = p * (pow((1 + r / 100), t));
        t++;
        Divida = a * (pow((1 + c / 100), b));
        b++;
        count++;

    }while (Aplica<Divida);
    printf("%d\n", count);
    printf("%.2f\n", Aplica);
    printf("%.2f\n", Divida);

    return 0;

}
