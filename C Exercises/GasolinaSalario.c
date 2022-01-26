#include <stdio.h>

int main()

{
    float salmin, gasol, perc;

    printf("\t\t PERCENTUAL DO LITRO DA GASOLINA SOBRE SALARIO 2021-2022\n\n");
    printf("Este aplicativo calcula o percentual de valor do litro da gasolina sobre o salario do trabalhador.\n\n");
    printf("Para iniciar, digite seu salario:\n");
    scanf("%f", &salmin);
    printf("Digite agora o valor do litro da gasolina na sua localidade:\n");
    scanf("%f", &gasol);
    perc=gasol*100/salmin;
    printf("O litro da gasolina, na sua localidade, custa o mesmo que %.2f%% do seu salario atual.\n\n", perc);
    printf("\t\tFORA BOLSONARO");
    return 0;
}
