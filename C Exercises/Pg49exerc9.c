#include <stdio.h>

void MediaFinal (float Media)
{
    if (Media>=0 && Media<=49)
        {
            printf("Conceito D.\n");
        }
    if (Media>=50 && Media<=69)
        {
            printf("Conceito C.\n");
        }
    if (Media>=70 && Media<=89)
        {
            printf("Conceito B.\n");
        }
    if (Media>=90 && Media<=100)
        {
            printf("Conceito A.\n");
        }
    if (Media<0 || Media>100)
        {
            printf("Nao foi possivel calcular o conceito. Tente novamente.\n");
        }

}
int main()
{
    float mediaaluno, conceito;

    printf("Digite a media final do(a) aluno(a):\n");
    scanf("%f", &mediaaluno);
    MediaFinal(mediaaluno);
    return 0;
}
