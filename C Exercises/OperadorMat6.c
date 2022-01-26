#include <stdio.h>

int main()
/*Desenvolver um algoritmo para ler um salario (real) e um percentual (inteiro) de aumento.
O algoritmo dever´a imprimir o salario atualizado com o aumento proposto com duas casas decimais.*/

{
    float sal, salreal, aumento;
    int percent;


    printf("Vamos calcular seu salario real depois do ultimo aumento.\n");
    printf("Para calcular esse valor, precisamos do seu salario e do ultimo aumento, em %%.\n\n\n");
    printf("Digite seu salario atual:\n");
    scanf("%f", &sal);
    printf("Agora precisamos do valor do seu ultimo aumento percentual. Digite apenas o valor, sem o digito %%\n");
    scanf("%d", &percent);
    salreal=(sal*percent/100)+sal;
    aumento=sal*percent/100;
    printf("Pronto. Temos um resultado! Seu salario atual sera de: %.2f reais\n", salreal);
    printf("Seu aumento foi de %.2f reais\n\n", aumento);
    printf("Parabens pelo seu aumento!");
    return 0;

}

