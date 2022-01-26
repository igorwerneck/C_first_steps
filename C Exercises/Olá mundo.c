#include <stdio.h>


int main()
{
      char nome [1];
      char sapeka;
      char petisco;
      int idade;
      char cidade;
      printf("Digite o nome do seu Ursinho:\n");
      scanf("%s", nome);
      printf("Seu Ursinho se chama: %s\n", nome);
      printf("Escreva uma coisa que seu Ursinho gosta de ser:\n");
      scanf("%s",sapeka);
      printf("Realmente ele gosta de ser %s \n",sapeka);
      printf("O que seu Ursinho gosta de petiscar?\n");
      scanf("%s",petisco);
      printf("Hmmm, tambem gosto de %s \n",petisco);
      printf("Quantos anos tem seu Ursinho?\n");
      scanf("%d",idade);
      printf("Nossa, um cub ainda bem jovem!\n");
      printf("Em que cidade seu ursinho mora?\n");
      scanf("%s",cidade);
      printf("Que legal. Adorei conhecer seu Ursinho!\n");
      printf("Tenho certeza que ele te amo muito!");
      return 0;
}
