#include <stdio.h>

int main()

{
    float valor, ipva, perc;

    printf("\t\tAPLICATIVO PARA CALCULO DE IPVA ATUALIZADO\n\n\n");
    printf("Vamos calcular qual o valor percentual do seu IPVA em relacao ao valor do seu veiculo.\n\n");
    printf("Digite o valor do seu veiculo:\n");
    scanf("%f", &valor);
    printf("Digite o valor do IPVA pago:\n");
    scanf("%f", &ipva);
    perc=ipva*100/valor;
    printf("O IPVA corresponde a %.2f%% do valor do seu veiculo.", perc);
    return 0;

}
