#include <stdio.h>

int main()

/* Uma professora deu 3304 horas de aula no ano de 2021. Quantas horas por dia ela trabalhou.
O ano de 2021 teve 365 dias. Não considerar os domingos (52). */
{
char nomeprof;
float horastrab, horaula, saltotal, horasem, horadia, salsem, saldia;
#define diasano 365
#define semanasano 52

printf("\t\tAPLICATIVO PARA CALCULO DE HORAS DOS PROFESSORES ENGLEX (2021).\n\n");
printf("Para iniciar, digite o nome do professor ou da professora do Englex:\n");
scanf("%s", &nomeprof);
printf("Digite quantas horas o professor ou a professora trabalhou em 2021:\n");
scanf("%f", &horastrab);
printf("Digite, agora, o valor aproximado da hora\\aula desse professor(a):\n");
scanf("%f", &horaula);
printf("O professor:\n");
horasem=horastrab/semanasano;
saltotal=horastrab*horaula;
printf("recebeu um total de %f rublos em 2021.\n", saltotal);
printf("trabalhou %f horas por semana em 2021.\n", horasem);
salsem=horasem*horaula;
printf("recebeu %f rublos por semana em 2021.\n", salsem);
horadia=horastrab/diasano;
printf("trabalhou uma media de %f horas por dia em 2021.\n", horadia);
saldia=horadia*horaula;
printf("recebeu %f rublos por dia em 2021.", saldia);
return 0;


}
