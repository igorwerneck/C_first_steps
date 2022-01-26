#include <stdio.h>

void SayAge (int age)
{
    if (age<13)
    {
        printf("Trata-se de uma crianca.\n");
    }
    if (age>=13 && age<20)
    {
        printf("Trata-se de um adolescente.\n");
    }
    if (age>=20 && age<60)
    {
        printf("Trata-se de um adulto.\n");
    }
    if (age>=60 && age<115)
    {
        printf("Trata-se de um idoso.\n");
    }
    if (age<0 || age>=115)
    {
        printf("Idade invalida.\n");
    }

}
int main()
{
    int ageperson;

    printf("Digite sua idade e irei classifica-la conforme sua faixa etaria:\n");
    scanf("%d", &ageperson);
    SayAge(ageperson);
    return 0;

}
