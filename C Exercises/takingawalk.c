#include <stdio.h>

void Who (char name [10])
{
    printf("Oi, %s! Que bom te ver por aqui!\n", name);
}
void AplusB (float a, float b)
{
    printf("A soma dos numeros %.2f e %.2f foi calculada em: %.2f\n", a, b, a+b);
}
void AtimesB (float a, float b)
{
    printf("O produto dos numeros %.2f e %.2f foi calculado em: %.2f\n", a, b, a*b);
}
void IMC (float height, float weight)
{
    float info;
    info=weight/(height*height);
    printf("Seu IMC foi calculado em: %.2f.\n", info);

}
int main()
{

char login [100];
int option, x, y;
float weight, height;

printf("\t  ^.....^\n");
printf("\t ([@]-[@])\n");
printf("\t\  (  8  )\n");
printf("\t    (O) \n\n\n");
printf("Oi, quem esta ai?\n");
scanf("%s", &login);
Who(login);
printf("%s, eu sou o Monstro. Fui promovido e me tornei o seu assistente virtual. O que voce precisa?\n");
printf("Digite:\n");
printf("1 - Somar dois numeros X e Y.\n");
printf("2 - Multiplicar dois numeros X e Y.\n");
printf("3 - Calcular seu IMC.\n");
scanf("%d", &option);
if (option==1)
{
    printf("Digite os valores de X e Y:\n");
    scanf("%d %d", &x, &y);
    AplusB(x, y);
    printf("Obrigado por pedir minha ajuda.\n");
    return 0;
}
if (option==2)
{
    printf("Digite os valores de X e Y:\n");
    scanf("%d %d", &x, &y);
    AtimesB(x, y);
    printf("Obrigado por contar com a minha ajuda!\n");
    return 0;

}
if (option==3)
{
    printf("Digite seu peso em KG:\n");
    scanf("%f", &weight);
    printf("Digite, agora, sua altura em M:\n");
    scanf("%f", &height);
    IMC(height, weight);
    printf("Obrigado por me deixar ajudar. Cuide sempre da sua saude!");
    return 0;
}
return 0;
}
