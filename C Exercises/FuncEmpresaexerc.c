#include <stdio.h>
#define CustoFixo 5000
#define ValorVenda 102

void CustoProd (int unidade)
{
    float custo;
    custo=CustoFixo + (unidade*55) + (unidade*55)*25/100;
    printf("O custo de producao de %d pecas foi calculado em: %.2f\n", unidade, custo);

}
void CalcLucro (int unidades)
{
    float custo, lucro;
    custo=CustoFixo + (unidades*55) + (unidades*55)*25/100;
    lucro=(ValorVenda*unidades)-custo;
    printf("O lucro gerado com a venda de %d unidades foi calculado em: %.2f\n", unidades, lucro);

}
void CalcReceita (int units)
{
    int receita;
    receita=units*ValorVenda;
    printf("A receita gerada com a venda de %d unidades foi de: %d.\n", units, receita);
}
int main()

{
    int x;
    printf("Digite o valor de unidades produzidas, neste mes, na empresa:\n");
    scanf("%d", &x);
    CustoProd(x);
    CalcReceita(x);
    CalcLucro(x);
    return 0;
}
