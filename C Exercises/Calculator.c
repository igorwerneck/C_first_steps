#include <stdio.h>
#include <math.h>

void Calculator (double x, double y, char symbol)
{
    switch (symbol)
    {
    case '+':
    printf("Resultado: %.2f\n", x+y);
    break;
    case '-':
    printf("Resultado: %.2f\n", x-y);
    break;
    case '*':
    printf ("Resultado: %.2f\n", x*y);
    break;
    case '/':
    if (y==0)
    {
        printf("Erro: impossivel dividir por zero.\n");
    }
    else
    {
        printf("Resultado: %.2f\n", x/y);
    }
    break;
    case '^':
    printf("Resultado: %.2f\n", pow(x,y));
    break;
    case '%':
    printf("Resultado: %.2f\n", (x*y)/100);
    break;
    default:
    printf("Operador ou sintaxe invalida! Digite apenas os simbolos disponiveis (+,-,*,/,^) na sequencia X simbolo Y:\n");
    }
}

int main()
{
    float x, y;
    char operat;

printf("\t\t\t\t CALCULADORA COMERCIAL KI-SAPEKA 2022 (v. 2.000)\n\n");
printf("\t\t\t\t\tOperacoes disponiveis:\n");
printf("\t\tAdicao (+), Subtracao (-), Multiplicacao (*), Divisao (/), Porcentagem (%%) e Potenciacao (^)\n\n");
printf("Digite a operacao matematica desejada (simbolos disponiveis: +, -, *, /, ^) - Ex. 2*3\n");
scanf("%f %c %f", &x, &operat, &y);
Calculator(x, y, operat);
return 0;
}
