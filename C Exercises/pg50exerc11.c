#include <stdio.h>

void CalcSalary (int codenumber, float salary)
{
    switch(codenumber)
    {
    case 1:
        printf("Tecnicos receberam 50%% de aumento. Portanto, seu novo salario sera: %.2f.\n", (salary*50/100)+salary);
        break;
    case 2:
        printf("Gerentes receberam 30%% de aumento. Portanto, seu novo salario sera: %.2f.\n", (salary*30/100)+salary);
        break;
    case 3:
        printf("Demais funcionarios receberam 20%% de aumento. Portanto, seu novo salario sera: %.2f.", (salary*20/100)+salary);
        break;
    default:
        printf("Codigo invalido. Digite corretamente o codigo de cargo do funcionario.\n");
    }
}
int main()
{
    int codeperson;
    float salaryperson;

    printf("Digite o codigo do seu cargo para checar seu aumento de salario:\n");
    printf("1 - Tecnico.\n");
    printf("2 - Gerente.\n");
    printf("3 - Demais funcionarios.\n");
    scanf("%d", &codeperson);
    printf("Digite, agora, seu salario atual:\n");
    scanf("%f", &salaryperson);
    CalcSalary(codeperson, salaryperson);
    return 0;
}
