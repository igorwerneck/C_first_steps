#include <stdio.h>
#include <math.h>

float Checkpoupanca (float inicial, float juros, int meses)
{
    float finalv;
    finalv=inicial*(pow((1+juros/100), meses));
    return finalv;
}

float CheckpoupancaMensal (float inicial, float juros, int meses, float aporte)
{

    float x, a, b, c, d, finalvalue;
    x=juros/100;
    a=inicial*(pow((1+x), meses));
    b=aporte;
    c=(pow((1 + x), meses)-1);
    finalvalue=a+(b*(c/x));
    return finalvalue;
}
int main()
{
    float valorinicial, valormensal, taxajuros, TOTAL;
    int checkmensal, tempo;

    printf("\t\t\tAPLICATIVO PARA CALCULO DE RENDIMENTO DA POUPANCA (PETISCOINS 2022)\n\n\n");
    printf("\t\tVamos calcular quanto seu dinheiro vai render na poupanca com o passar dos meses!\n\n\n");
    printf("Digite o valor inicial que existe ou que voce gostaria de colocar na poupanca:\n");
    scanf("%f", &valorinicial);
    printf("Digite o valor da taxa de juros da poupanca:\n");
    scanf("%f", &taxajuros);
    printf("Voce planeja depositar algum valor fixo mensal? Digite '1' para SIM ou '2' para NAO:\n");
    scanf("%d", &checkmensal);
    if (checkmensal==1)
    {
        printf("Digite quanto, em media, voce planeja depositar por mes:\n");
        scanf("%f", &valormensal);
        printf("Digite, agora, o numero de meses para calcularmos o valor final:\n");
        scanf("%d", &tempo);
        printf("Vamos calcular...\n");
        TOTAL=CheckpoupancaMensal(valorinicial, taxajuros, tempo, valormensal);
        printf("Com um deposito inicial de %.2f reais, uma taxa de juros de %.2f%% e um deposito mensal de %.2f reais, em %d meses voce tera: %.2f reais.\n", valorinicial, taxajuros, valormensal, tempo, TOTAL);
        while (tempo>0)
        {
            printf("Gostaria de mudar o aporte mensal? Se sim, digite um novo valor. Se nao, mantenha o valor anterior:\n");
            scanf("%f", &valormensal);
            printf("Gostaria de simular o valor final com mais tempo? Digite o numero de meses:\n");
            scanf("%d", &tempo);
            TOTAL=CheckpoupancaMensal(valorinicial, taxajuros, tempo, valormensal);
            printf("Com um deposito inicial de %.2f reais, uma taxa de juros de %.2f%% e um deposito mensal de %.2f reais, em %d meses voce tera: %.2f reais.\n", valorinicial, taxajuros, valormensal, tempo, TOTAL);
        }

    }
    else
    {
        printf("Digite, agora, o numero de meses para calcularmos o valor final:\n");
        scanf("%d", &tempo);
        printf("Vamos calcular...\n");
        TOTAL=Checkpoupanca(valorinicial, taxajuros, tempo);
        printf("Com um deposito inicial de %.2f reais e uma taxa de juros de %.1f%%, em %d meses voce tera: %.2f reais.\n", valorinicial, taxajuros, tempo, TOTAL);
        while (tempo>0)
        {
            printf("Gostaria de simular o valor final com mais tempo? Digite o numero de meses:\n");
            scanf("%d", &tempo);
            TOTAL=Checkpoupanca(valorinicial, taxajuros, tempo);
            printf("Com um deposito inicial de %.2f reais e uma taxa de juros de %.1f%%, em %d meses voce tera: %.2f reais.\n", valorinicial, taxajuros, tempo, TOTAL);
        }
    }
    return 0;
}
