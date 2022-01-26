#include <stdio.h>
#include <string.h>

int main ()

{
    char n1 [100], resp [100];

    printf("\t  \\ /   ^.....^   \\ /       \n");
    printf("\t  -*-  ([@]-[@])  -*-      \n");
    printf("\t  /|\\   (  8  )   /|\\     \n");
    printf("\t   |      (O)      |    \n");
    printf("Oi, sou eu de novo, seu monstro favorito versao ano novo. Qual seu nome?\n");
    printf("Digite sua resposta:\n");
    scanf("%s", &n1);
    printf("%s, feliz ano novo!!! Muita paz e felicidade para voce!\n", n1);
    printf("%s, acha que eu sou bonito?\n", n1);
    printf("Digite sua resposta:\n");
    scanf("%s", &resp);
    if (strcmp(resp, "sim")==0 || strcmp(resp, "Sim")==0 || strcmp(resp, "Muito")==0 || strcmp(resp, "muito")==0 || strcmp(resp, "Claro")==0 || strcmp(resp, "claro")==0)
    {
        printf("Que gentil! Penso a mesma coisa de voce! <3");

    }
    else
    {
        printf("Esse ano estou mais educado. Nao vou falar o que penso nesse caso.");
    }
    return 0;
}
