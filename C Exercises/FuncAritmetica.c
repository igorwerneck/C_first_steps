#include <stdio.h>

void Operation (float a, float b, char symbol)
{
    switch (symbol)
    {
    case '+':
        printf("Resultado: %.2f\n", a+b);
    break;
    case '-':
        printf("Resultado: %.2f\n", a-b);
    break;
    case '*':
        printf("Resultado: %.2f\n", a*b);
    break;
    case '%':
        printf("Resultado: %.2f\n", (a*b)/100);
    break;
    case '/':
        if (b==0)
        {
            printf("Impossivel dividir por zero.\n");
        }
        else
        {
            printf("Resultado: %.2f\n", a/b);
        }
        break;
    default:
        printf("Operador invalido: erro.\n");

    }
}

int main()
{
    float x, y;
    char operat;

    printf("\t\t CALCULADORA KISAPECA 2022 (v. 1.00)\n\n");
    printf("Digite a operacao matematica desejada (simbolos disponiveis: +, -, *, /, %%) - Exemplo: 2 + 3\n");
    scanf("%f %c %f", &x, &operat, &y);

    Operation(x, y, operat);
}
