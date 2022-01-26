#include <stdio.h>

int main()

{
    int n1, n2, n3, soma;
    printf("Digite tres valores:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    printf("O programa vai calcular o quadrado do primeiro mais o quadrado do segundo menos o quadrado do terceiro:\n");
    soma=(n1*n1)+(n2*n2)-(n3*n3);
    printf("\n%d*%d + %d*%d - %d*%d = %d", n1,n1,n2,n2,n3,n3,soma);
    return 0;
}
