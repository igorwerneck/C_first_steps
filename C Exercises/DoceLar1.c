#include <stdio.h>

int main()

{
    #define aluguel 800
    #define cond 250
    #define luz 150
    #define gas 70
    #define net 100
    #define cel 60
    #define compras 500
    #define crispy 18
    int dias;
    float gastos;

    printf("Vamos calcular quanto o Ursinho precisa ganhar para pagar as contas e comer um Machados Crispy por dia durante X dias.\n\n");
    printf("Digite quantos dias (entre 1 e 30) voce gostaria de comer um Machados Crispy:\n");
    scanf("%d", &dias);
    gastos=aluguel+cond+luz+gas+net+cel+compras+(crispy*dias);
    printf("Para comer um Machados Crispy em %d dias e ainda pagar as contas, voce vai precisar ganhar %.2f reais\n\n", dias, gastos);
    printf("BORA TRABALHAR, RILAKKUMA!");
    return 0;

}
