#include <stdio.h>

//Escrever um procedimento para receber dois n´umeros inteiros e imprimir o produto desses valores.//

void Produto2 (int x, int y)
{
    int prod;
    prod=x*y;
    printf("O produto dos numeros %d e %d foi calculado em: %d.\n", x, y, prod);

}
void Produto3 (int x, int y, int z)
{
    int prod;
    prod=x*y*z;
    printf("O produto dos numeros %d, %d e %d foi calculado em: %d.\n", x, y, z, prod);
}
int main()
{
    int a, b, c, d;
    printf("Digite dois valores inteiros:\n");
    scanf("%d %d", &a, &b);
    Produto2(a, b);
    printf("Digite, agora, tres valores inteiros:\n");
    scanf("%d %d %d", &a, &b, &c);
    Produto3(a, b, c);
    return 0;
}
