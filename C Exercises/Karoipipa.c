#include <stdio.h>
#define ano 365

int main()
{
    float npipa, npipa2, dinheiro, custopipa, custopipa2;
    int qtdpipasano, qtdpipasano2, dinheiropipa, dinheiropipa2, duracao, duracao2, tipo;


    printf("\t\t BEM-VINDO AO KAROIPIPA - APLICATIVO PARA CALCULO DE PIPAS ANUAIS (Dev_Urso 2022)\n\n");
    printf("Digite o valor de cada pipa:\n");
    scanf("%f", &npipa);
    printf("Seu pai te deu algum dinheirinho? Se sim, digite esse valor:\n");
    scanf("%f", &dinheiro);
    printf("Existe alguma outra pipa que custa outro valor? Digite '1' para SIM ou '2' para NAO.\n");
    scanf("%d", &tipo);
    if (tipo==1)
    {
        printf("Quanto custa essa outra pipa?\n");
        scanf("%f", &npipa2);
        printf("Digite, agora, quanto tempo (dias) dura cada pipa:\n");
        printf("Pipa tipo 1:\n");
        scanf("%d", &duracao);
        printf("Pipa tipo 2:\n");
        scanf("%d", &duracao2);
        printf("Entendi. Vamos calcular...\n\n");
        qtdpipasano=ano/duracao;
        qtdpipasano2=ano/duracao2;
        custopipa=qtdpipasano*npipa;
        custopipa2=qtdpipasano2*npipa2;
        dinheiropipa=dinheiro/npipa;
        dinheiropipa2=dinheiro/npipa2;
        printf("Se cada pipa tipo 1 dura %d dias e cada pipa tipo 2 dura %d dias, voce vai....\n", duracao, duracao2);
        printf("Precisar de %d pipas tipo 1 ou %d pipas tipo 2 por ano.\n", qtdpipasano, qtdpipasano2);
        printf("Precisar de %.2f reais por ano para comprar as pipas tipo 1 ou %.2f reais por ano para comprar as pipas tipo 2.\n", custopipa, custopipa2);
        printf("E, com seu dinheirinho atual, voce consegue comprar %d pipas tipo 1 ou %d pipas tipo 2.\n\n", dinheiropipa, dinheiropipa2);
        printf("\t\t\t\t\t SEJA URSINHO PIPEIRO!!");
        return 0;
    }

    printf("Digite, agora, quanto tempo (dias) dura cada pipa:\n");
    scanf("%d", &duracao);
    printf("Entendi. Vamos calcular...\n\n");
    qtdpipasano=ano/duracao;
    custopipa=qtdpipasano*npipa;
    dinheiropipa=dinheiro/npipa;
    printf("Se cada pipa sua dura %d dias, voce vai....\n", duracao);
    printf("Precisar de %d pipas por ano.\n", qtdpipasano);
    printf("Precisar de %.2f reais por ano para comprar as pipas.\n", custopipa);
    printf("E, com seu dinheirinho atual, voce consegue comprar %d pipas.\n\n", dinheiropipa);
    printf("\t\t\t\t\t SEJA URSINHO PIPEIRO!!");
    return 0;





}
