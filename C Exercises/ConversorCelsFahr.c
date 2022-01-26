#include <stdio.h>

int main()

{
    float c, f;

    printf("\t\tALGORITMO DE CONVERSAO CELSIUS - FAHRENHEIT\n\n");
    printf("Digite a temperatura em Celsius:\n");
    scanf("%f", &c);
    f=(9*c+160)/5;
    printf("Temos a seguinte temperatura em Fahrenheit: %.2f.", f);
    return 0;

}
