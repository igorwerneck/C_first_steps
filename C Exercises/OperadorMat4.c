#include <stdio.h>

int main()

{
float s1, s2, t1, t2, velox;
    printf("Vamos calcular a velocidade media de uma particula, em modulo.\n\n\n");
    printf("\t\tSabemos que VELm = (S2-S1)/(T2-T1), portanto...\n\n\n");
    printf("Digite a posicao inicial da particula:\n");
    scanf("%f", &s1);
    printf("Agora digite a posicao final da particula:\n");
    scanf("%f", &s2);
    printf("Agora precisamos do tempo inicial do movimento. Digite T1:\n");
    scanf("%f", &t1);
    printf("Muito bem. Agora informe o tempo final do movimento. Digite T2:\n");
    scanf("%f", &t2);
    velox=(s2-s1)/(t2-t1);
    printf("\t\t Velocidade = (%f-%f) / (%f-%f)\n\n\n", s2,s1,t2,t1);
    printf("\t\t A velocidade media, em modulo, da particula e igual a:%f\n\n\n", velox);
    return 0;

}
