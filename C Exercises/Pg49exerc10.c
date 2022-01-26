#include <stdio.h>

void Dayofweek (int day)
{
    switch(day)
    {
    case 1:
        printf("Domingo.\n");
        break;
    case 2:
        printf("Segunda-feira.\n");
        break;
    case 3:
        printf("Terca-feira.\n");
        break;
    case 4:
        printf("Quarta-feira.\n");
        break;
    case 5:
        printf("Quinta-feira.\n");
        break;
    case 6:
        printf("Sexta-feira.\n");
        break;
    case 7:
        printf("Sabado.\n");
        break;
    default:
        printf("Dia da semana invalido.\n");
    }
}

int main()
{
    int x;

    printf("Digite um numero de 1 a 7:\n");
    scanf("%d", &x);
    Dayofweek(x);
    return 0;
}
