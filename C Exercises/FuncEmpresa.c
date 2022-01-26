#include <stdio.h>

float CalcProd (float totalv, int productn)
{
    float result;

    if (totalv > 100)
    {
        if (productn==1)
        {
            result=(totalv*7)/100;
        }
    }
    else
    {
        result=(totalv*7)/100 + 5;
    }
    if (totalv >= 70 && totalv <=100)
    {
        result=(totalv*6)/100 + 10;
    }
    else
    {
        result=totalv+10;
    }
    return result;
}

int main()
{

float price, pricefinal;
int amount;

printf("\t\t APLICATIVO DE CALCULO DE VALOR TOTAL (KISAPECA 2022)\n\n");
printf("Ofertas especiais da semana:\n");
printf("1 - Pedidos acima de R$100.00 com um unico produto recebem desconto de 7%% e frete gratis!\n");
printf("2 - Pedidos acima de R$100.00 com mais de um produto recebem desconto de 7%% e pagam frete de R$5.00.\n");
printf("3 - Pedidos que custam entre R$70.00 e R$100.00 recebem desconto de 6%% e pagam frete de R$10.00.\n");
printf("4 - Demais situacoes nao recebem desconto e pagam frete de R$10.00.\n\n");
printf("Para iniciar, digite o valor total do pedido:\n");
scanf("%f", &price);
printf("Digite a quantidade de produtos vendida:\n");
scanf("%d", &amount);
pricefinal=CalcProd(price, amount);
printf("O pedido, no total, ira custar: %.2f. Obrigado por comprar em nossa loja!", pricefinal);
return 0;
}
