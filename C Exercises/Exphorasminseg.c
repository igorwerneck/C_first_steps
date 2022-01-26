#include <stdio.h>

void exptemp (int tempo)
{
    int horas, min, segs;
    horas=(tempo/60)/60;
    min=(tempo-horas*3600)/60;
    segs=(tempo-horas*3600-min*60);
    printf("A tarefa vai levar %d horas, %d minutos e %d segundos\n", horas, min, segs);

}
int main()
{
    int segundos;
    printf("Digite quantos segundos, no total, a tarefa vai durar:\n");
    scanf("%d", &segundos);
    exptemp(segundos);
    return 0;

}
