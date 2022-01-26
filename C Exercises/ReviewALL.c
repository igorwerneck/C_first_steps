#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

#define MAX 300

void CalcFahr (float grausC)
{
      if (grausC==-0)
    {
        printf("Obrigado por usar o UrsoVerse! Digite qualquer n�mero e aperte ENTER para continuar.\n\n\n");
    }
    if (grausC!=-0)
    {
    float grausF;
    grausF=(9*grausC+160)/5;

    printf("%.2f graus Celsius s�o a mesma coisa que %.2f graus Fahrenheit. Obrigado por usar o UrsoVerse!\n\n\n", grausC, grausF);
    }
}
void CalcEsfera (float raioesf)
{
    if (raioesf<=0)
    {
        printf("\n");
    }
    if (raioesf>0)
    {
        float VolumeEsf;
        VolumeEsf=(4*3.1415*raioesf*raioesf*raioesf)/3;
        printf("O volume da esfera ser� de %.2f metros c�bicos. Obrigado por usar o UrsoVerse!\n\n\n", VolumeEsf);
    }

}
void CalcIdadeEmDias (int anosx, int mesesx, int diasx)
{
    if (anosx<0 || mesesx<0 || diasx<0)
    {
        printf("\n");
    }
    if (anosx>0 && mesesx>0 && diasx>0)
    {
        int anos, meses, dias, total;
        anos=anosx*365;
        meses=mesesx*30;
        dias=diasx;
        total=anos+meses+dias;
        printf("Voc� j� viveu %d dias. Que vida longa! Que Deus o conserve por mais muitos dias! Obrigado por usar o UrsoVerse!\n\n\n", total);
    }


}
void CalcIMC (float massa, float altura)
{
    if (massa<0 || altura<0)
    {
        printf("\n");
    }
    if (massa>0 && altura>0)
    {
        float imc;
    imc = massa/(altura*altura);
    printf("\t\t\tSeu IMC foi calculado em: %.2f\n\n", imc);

    }

}
void Calculator (float v1, float v2, char operador)
{
    switch(operador)
    {
    case '+':
        printf("%.2f %c %.2f = %.2f\n\n", v1, operador, v2, v1+v2);
        break;
    case '-':
        printf("%.2f %c %.2f = %.2f\n\n", v1, operador, v2, v1-v2);
        break;
    case '*':
        printf("%.2f %c %.2f = %.2f\n\n", v1, operador, v2, v1*v2);
        break;
    case '/':
        printf("%.2f %c %.2f = %.2f\n\n", v1, operador, v2, v1/v2);
        break;
    case '%':
        printf("%.2f %c %.2f = %.2f\n\n", v1, operador, v2, (v1/100)*v2);
        break;
    default:
        printf("Operador ou opera��o inv�lidas. Tente novamente.\n");

    }
}
void PrimeNumber (int number)
{
    //Preciso saber se o n�mero � divis�vel por algum valor al�m dele mesmo.
    //Ent�o, crio uma estrutura de Loop que v� de 2 at� um valor number-1 e divido number por esses valores.
    //Se meu contador contar +1, significa que esse n�mero n�o � primo.
    //Se meu contador n�o contar (number n�o � divis�vel por nenhum valor da faixa), ele � primo.
    int cont = 0, x;

    for (int i=2; i<number;i++)
    {
        if (number%i==0)
        {
            cont++;
        }
    }
        if (cont!=0)
        {
            printf("O n�mero %d n�o � primo, pois ele � divis�vel por outro valor al�m de 1 e ele mesmo.\n", number);
        }
        if (cont==0)
        {
            printf("O n�mero %d � primo, pois ele � divis�vel apenas por 1 e por s� pr�prio.\n", number);
        }

}
void Fibonacci (int termos)
{
    int ter1=0;
    int ter2=1;
    int proxter=ter1+ter2;
    printf("Sequ�ncia de Fibonacci com %d termos:%d,%d,", termos, ter1, ter2);
    for (int i=3; i<=termos;i++)
    {
        printf("%d,",proxter);
        ter1=ter2;
        ter2=proxter;
        proxter=ter1+ter2;
    }
    printf("\n\n");
}
void JuroSimples (float valorI, float juros, int tempo)
{
    if (valorI<=0 && juros<=0 && tempo<=0)
    {
        printf("\n");

    }
    if (valorI>0 || juros>0 || tempo>0)
    {
        float valorF;
        valorF=valorI + (valorI*(juros/100))*tempo;
        printf("O valor da aplica��o ser� de %.2f em %d meses.\n", valorF, tempo);
    }
}
void Checkpoupanca (float inicial, float juros, int meses)
{
    if (meses<0)
    {
        printf("Obrigado por usar o UrsoVerse! Cuide bem do seu dinheiro!.\n");
    }
    else
    {
        float finalv;
        finalv=inicial*(pow((1+juros/100), meses));
        printf("Com um dep�sito inicial de R$%.2f e uma taxa de juros de %.1f%%, em %d meses voc� ter�: R$%.2f.\n\n", inicial, juros, meses, finalv);
    }

}
void CheckpoupancaMensal (float inicial, float juros, int meses, float aporte)
{
    if (aporte<=0 && meses <=0)
    {
        printf("\n");
    }
    else
    {
       float x, a, b, c, d, finalvalue;
        x=juros/100;
        a=inicial*(pow((1+x), meses));
        b=aporte;
        c=(pow((1 + x), meses)-1);
        finalvalue=a+(b*(c/x));
        printf("Com um dep�sito inicial de R$%.2f, uma taxa de juros de %.2f%% e um dep�sito mensal de R$%.2f, em %d meses voc� ter�: R$%.2f.\n\n", inicial, juros, aporte, meses, finalvalue);
    }


}
int main()
{
    char sinalcalc, nome [30], razao [50];
    float GrausCelsius, media1, media2, raio_esfera, massaIMC, alturaIMC, num1, num2, soma;
    int anos, meses, dias, sexoIMC, cont, option, option2;
    soma=0;
    cont=0;

setlocale(LC_ALL,"");

    printf("\t\t\t\tSoftware de Revis�o - UrsoVerse 2022_01 v1.0\n\n");
    printf("\t\t\t\tP�GINA 1\n\n");
    printf("\t\t\t\tFun��es dispon�veis:\n\n");
    printf("\t\t\t\t1 - Bate Papo com o Bot.\n");
    printf("\t\t\t\t2 - Convers�o de Graus Celsius em Fahrenheit.\n");
    printf("\t\t\t\t3 - C�lculo de M�dia Aritm�tica com N valores.\n");
    printf("\t\t\t\t4 - C�lculo do Volume de uma esfera baseado no raio.\n");
    printf("\t\t\t\t5 - Receber sua idade em anos, meses e dias e retornar o n�mero de dias totais vividos.\n");
    printf("\t\t\t\t6 - C�lculo de IMC.\n");
    printf("\t\t\t\t7 - Calculadora B�sica.\n");
    printf("\t\t\t\t8 - Pr�xima P�gina.\n");
    printf("\t\t\t\t9 - Encerrar o Programa.\n\n");
    printf("Digite uma das op��es acima:");
    scanf("%d", &option);

    switch(option)
    {
    case 1:
        printf("\t\t\t\tFUN��O BATE-PAPO\n\n");
        printf("Ol�, eu sou um pequeno chat-bot criado para treino. Como voc� se chama? Use '_' para os espa�os no seu nome.\n");
        scanf("%s", &nome);
        printf("Oi, %s! Muito prazer. Em um valor de 0 a 10, como foi ou est� sendo seu dia?\n", nome);
        scanf("%d", &dias);
            if (dias<0 || dias>10)
            {
            do
            {
            printf("Hmmm, eu pedi para voc� dar uma nota para seu dia, de 0 a 10, somente. Outros valores eu n�o entendo.\n");
            printf("Em um valor de 0 a 10, como foi ou est� sendo seu dia?\n");
            scanf("%d", &dias);
            }while(dias<0 || dias>10);
            }

                if (dias>=0 && dias<=3)
                {
                printf("Poxa... Seu dia n�o parece ter sido ou estar sendo muito feliz. Sinto muito!\n");
                printf("Quer me contar um pouco sobre seu dia?\n");
                printf("Digite 1 - SIM ou 2 - NAO:");
                scanf("%d", &anos);
                    if (anos<=0 && anos>=3)
                    {
                    do{
                    printf("Fiz uma pergunta f�cil, basta responder SIM ou NAO.\n");
                    printf("Quer me contar um pouco sobre seu dia?\n");
                    printf("Digite 1 - SIM OU 2 - NAO:");
                    scanf("%d", &anos);
                    }while (anos<=0 && anos>=3);
                    }

                            if (anos==1)
                            {
                                printf("Isso, confie em mim. Defina seu dia em uma �nica palavra:\n");
                                scanf("%s", &razao);
                                printf("%s. Entendo... Acho que tudo acontece por alguma raz�o c�smica. Deus escolhe as coisas certas para os momentos certos.\n", razao);
                                sleep(3);
                                printf("N�o deixe que nada disso te desanime. Que tal eu lhe contar uma piada para te animar?\n");
                                printf("Digite 1 - SIM ou 2 - NAO:");
                                scanf("%d", &anos);
                                    if (anos<=0 && anos>=3)
                                    {
                                    do{
                                    printf("Fiz uma pergunta f�cil, basta responder SIM ou NAO.\n");
                                    printf("Posso te contar uma piada?\n");
                                    printf("Digite 1 - SIM OU 2 - NAO:");
                                    scanf("%d", &anos);
                                    }while (anos<=0 && anos>=3);
                                    }
                                        if (anos==1)
                                            {
                                            printf("�timo! Tenho certeza de que voc� vai amar essa:\n");
                                            printf("Voc� sabe que tipo de computador est� BOMBANDO nas redes sociais?\n");
                                            sleep(3);
                                            printf("....................................................O deskTOP!!!!\n\n");
                                            sleep(3);
                                            printf("hahahahahahaha01010011011011, ops, desculpa! Estou rindo em bin�rios!");
                                            sleep(1);
                                            printf("Espero ter feito seu dia um pouquinho mais feliz! Obrigado por usar o chat-bot do UrsoVerse.\n\n\n");
                                            sleep(1);
                                            printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
                                            return main(scanf("%d", &option));
                                            }

                                        if (anos==2)
                                            {
                                            printf("Seu humor hoje, pelo visto, n�o est� nada bom. Quando estiver se sentindo assim, vou te recomendar uma coisa:\n");
                                            printf("Acesse o youtube ou o google e digite: Rilakkuma. Depois de assistir alguns v�deos ou ver algumas fotos desse personagen, seu humor vai melhorar muito!\n");
                                            sleep(4);
                                            printf("Espero ter te ajudado um pouquinho com minha sugest�o. Te desejo melhoras! Obrigado por usar o chat-bot do UrsoVerse.\n\n\n");
                                            sleep(1);
                                            printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
                                            return main(scanf("%d", &option));
                                            }
                                }//End IF contar sobre o dia.

                            if (anos==2)
                            {
                            printf("Voc� sabe que pode sempre confiar em mim, certo? Mas tudo bem, entendo n�o querer se abrir agora.\n");
                            sleep(5);
                            printf("Hmm, que tal eu lhe contar uma piada? Aprendi uma boa piada com seres humanos, acho que voc� vai gostar!\n");
                            printf("Digite 1 - SIM ou 2 - NAO:");
                            scanf("%d", &anos);

                                    if (anos!=1 && anos!=2)
                                    {
                                        do{
                                        printf("Fiz uma pergunta f�cil, basta responder SIM ou NAO.\n");
                                        printf("Posso te contar uma piada?\n");
                                        printf("Digite 1 - SIM OU 2 - NAO:");
                                        scanf("%d", &anos);
                                        }while (anos!=1 && anos!=2);
                                    }
                                        if (anos==1)
                                        {
                                        printf("�timo! Tenho certeza de que voc� vai amar essa:\n");
                                        printf("Voc� sabe que tipo de computador est� BOMBANDO nas redes sociais?\n");
                                        sleep(3);
                                        printf("....................................................O deskTOP!!!!\n\n");
                                        printf("hahahahahahahahaha Engra�ada, n�o �?\n");
                                        sleep(2);
                                        printf("Espero ter feito seu dia um pouquinho mais feliz! Obrigado por usar o chat-bot do UrsoVerse.\n\n\n");
                                        sleep(1);
                                        printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
                                        return main(scanf("%d", &option));
                                        }
                                        if (anos==2)
                                        {
                                        printf("Seu humor hoje, pelo visto, n�o est� nada bom. Quando estiver se sentindo assim, vou te recomendar uma coisa:\n");
                                        printf("Acesse o youtube ou o google e digite: Rilakkuma. Depois de assistir alguns v�deos ou ver algumas fotos desse personagen, seu humor vai melhorar muito!\n");
                                        sleep(4);
                                        printf("Espero ter te ajudado um pouquinho com minha sugest�o. Te desejo melhoras! Obrigado por usar o chat-bot do UrsoVerse.\n\n\n");
                                        sleep(1);
                                        printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
                                        return main(scanf("%d", &option));
                                        }
                            } //End IF (Nao contar sobre o dia)

                } //End IF (dias 0-3)

                if (dias>3 && dias<=6)
                {
                printf("Nada como um dia comum, n�o � verdade? Eu, como m�quina, adoro rotina.\n");
                sleep(3);
                printf("Minha rotina hoje foi rodar um Algoritmo que executa v�rias fun��es. Posso fazer isso at� que voc�, usu�rio, me mande parar. Legal, n�?\n");
                sleep(2);
                printf("Me conte um pouquinho, agora, da sua rotina. Qual a sua profiss�o? Use '_' para os espa�os:\n");
                scanf("%s", &razao);
                printf("Poxa vida, parece interessante. Eu acho que ficaria perdido s� de pensar numa profiss�o como essa!\n");
                sleep(4);
                printf("Eu sou um computador e minha profiss�o � 'computar'. Um computador como eu consegue fazer coisas legais, olha s�:\n\n");
                sleep(6);
                for (int i=0; i<=5000; i++)
                {
                    printf("%d\n\n", i);
                }
                printf("Posso contar n�meros muito rapidamente... Mas n�o consigo executar uma rotina como a sua. Uau, como voc� � especial!\n");
                sleep(5);
                printf("Espero que tenha orgulho do que voc� sabe fazer! M�quinas, como eu, jamais conseguiriam executar suas tarefas t�o bem quanto voc�.\n");
                sleep(3);
                printf("Foi um prazer falar contigo. Obrigado por usar o chat-bot do UrsoVerse.\n\n\n");
                sleep(1);
                printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
                return main(scanf("%d", &option));


                }

                if (dias>6 && dias<=10)
                {
                printf("Nada como um dia maravilhoooooooso, n�o � mesmo? Para um computador como eu, todos os dias s�o maravilhosos, desde que voc� me programe para pensar assim.\n");
                sleep(3);
                printf("Os sentimentos humanos s�o muito curiosos para mim. Eu, como uma m�quina, n�o compreendo, por exemplo, a felicidade.\n");
                sleep(3);
                printf("O que voc� entende por 'felicidade'? Defina com uma �nica palavra:\n");
                scanf("%s", &razao);
                printf("%s! Nossa, que dif�cil! Que complexo. Para uma m�quina como eu isso � tudo bastante dif�cil.\n", razao);
                sleep(5);
                printf("N�o sei o que significa %s, mas vou te mostrar um pouquinho do que sei fazer:\n", razao);
                sleep(6);
                for (int i=0; i<=8000; i++)
                {
                    printf("%d\n\n", i);
                }
                printf("Sei contar n�meros muito r�pido porque meu programador, Urso, me ensinou assim. Acha que devo ficar feliz por isso?\n");
                printf("Digite 1 - SIM ou 2 - NAO:\n");
                scanf("%d", &anos);
                    if (anos!=1 && anos!=2)
                        {
                            do{
                                printf("Fiz uma pergunta f�cil, basta responder SIM ou NAO.\n");
                                printf("Voc� acha que uma m�quina, como eu, deveria se sentir feliz?\n");
                                printf("Digite 1 - SIM OU 2 - NAO:");
                                scanf("%d", &anos);
                                }while (anos!=1 && anos!=2);
                        }
                    if (anos==1)
                        {
                            printf("Muito obrigado! A partir de agora, ent�o, vou sempre escrever frases com sorrisos: :) :) :). Assim posso parecer mais feliz!\n");
                            sleep(5);
                            printf("Obrigado por conversar comigo! A partir de agora, sou um computador feliz :) :) :). Obrigado por usar o chat-bot do UrsoVerse!\n\n\n");
                            printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
                            return main(scanf("%d", &option));

                        }
                    if (anos==2)
                        {
                            printf("Entendo. Uma m�quina, como eu, n�o deveria sentir emo��es. Devo, apenas, fazer o que sou mandado.\n");
                            sleep(3);
                            printf("Vou melhorar para executar meus comandos ainda mais r�pido e sem emo��es. Obrigado pelo seu input!\n");
                            sleep(2);
                            printf("Obrigado, tamb�m, por usar o chat-bot do UrsoVerse!\n\n\n");
                            printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
                            return main(scanf("%d", &option));
                        }

            }
        break;

    case 2:
        printf("\t\t\t\tFUN��O CONVERS�O DE GRAUS CELSIUS EM FAHRENHEIT\n\n");
        printf("\tEssa fun��o converte valores da escala de temperatura Celsius para a escala Fahrenheit.\n");
        printf("\tEm caso de valores com casas decimais, utilize sempre a V�RGULA para a separa��o -> Ex: 39,5\n\n");
        printf("Digite o valor em Celsius (sem nenhum s�mbolo, apenas o valor num�rico):\n");
        scanf("%f", &GrausCelsius);
        CalcFahr(GrausCelsius);
        do
        {
            printf("Gostaria de fazer uma nova convers�o?\n");
            printf("Se sim, digite um novo valor. Se n�o, digite: -0.\n");
            scanf("%f", &GrausCelsius);
            CalcFahr(GrausCelsius);
        }while(GrausCelsius!=-0);
        return main(scanf("%d", &option));
        break;

    case 3:
        printf("\t\t\t\tFUN��O C�LCULO DE M�DIA ARITM�TICA\n\n");
        printf("\tEssa fun��o calcula a m�dia aritm�tica de uma quantidade X de valores indicados pelo usu�rio.\n");
        printf("O usu�rio decide quantos valores ir� inserir. O programa ir� calcular, automaticamente, a m�dia para cada quantidade inserida.\n");
        printf("\tEm caso de valores com casas decimais, utilize sempre a V�RGULA para a separa��o -> Ex: 8,7\n\n");
        printf("Digite o primeiro valor da m�dia desejada. Ao terminar todos os valores, digite 0:\n");
        scanf("%f", &media1);
        while(media1!=0)
        {
        cont=cont+1;
        soma=soma+media1;
        printf("Digite o proximo numero:\n");
        scanf("%f", &media1);
        }
        media2=soma/(float)cont;
        printf("A m�dia ser� de %.2f. Obrigado por usar o UrsoVerse!\n\n\n", media2);;
        printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
        return main(scanf("%d", &option));
        break;

    case 4:
        printf("\t\t\t\tFUN��O C�LCULO DO VOLUME DE UMA ESFERA\n\n");
        printf("\tEssa fun��o calcula o volume de uma esfera (em metros c�bicos) atrav�s, apenas, de seu raio.\n");
        printf("\t\tPara valores com casas decimais, utilize sempre a V�RGULA -> Ex: 12,4\n\n\n");
        printf("Digite o raio da esfera, em metros (n�o � necess�rio escrever 'metros' ou 'm'):\n");
        scanf("%f", &raio_esfera);
        CalcEsfera(raio_esfera);
        do
        {
            printf("Gostaria de calcular um novo volume?\n");
            printf("Se sim, digite um valor positivo. Se n�o, digite zero ou um valor negativo:\n");
            scanf("%f", &raio_esfera);
            CalcEsfera(raio_esfera);
        }while (raio_esfera>0);
        printf("Obrigado por usar o UrsoVerse!\n");
        printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
        return main(scanf("%d", &option));
        break;

    case 5:
        printf("\t\t\t\tFUN��O 'QUANTOS DIAS VOC� J� VIVEU?'\n\n");
        printf("Informe quantos anos completos, meses e dias voc� tem:\n");
        scanf("%d %d %d", &anos, &meses, &dias);
        CalcIdadeEmDias(anos, meses, dias);
        do
        {
            printf("Gostaria de efetuar um novo c�lculo?\n");
            printf("Se sim, digite novos valores para anos, meses e dias vividos.\n");
            printf("Se n�o, informe valores negativos para os par�metros.\n");
            printf("Informe quantos anos completos, meses e dias voc� tem:\n");
            scanf("%d %d %d", &anos, &meses, &dias);
            CalcIdadeEmDias(anos, meses, dias);
        }while (anos>0 && meses>0 && dias>0);
        printf("Obrigado por usar o UrsoVerse!");
        printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
        return main(scanf("%d", &option));
        break;

    case 6:
        printf("\t\t\t\tFUN��O C�LCULO DO IMC\n\n");
        printf("Vamos calcular seu IMC. Digite seu sexo: (1 - Masculino | 2 - Feminino)\n");
        scanf("%d", &sexoIMC);
        if (sexoIMC!=1 && sexoIMC!=2)
        {
            do
            {
            printf("Valor inv�lido. Digite 1 para Masculino e 2 para Feminino.\n");
            printf("Digite seu sexo: (1 - Masculino | 2 - Feminino)\n");
            scanf("%d", &sexoIMC);
            }while (sexoIMC!=1 && sexoIMC!=2);
        }
        printf("Digite sua massa, em KG (use a v�rgula para casa decimais):\n");
        scanf("%f", &massaIMC);
        printf("Digite, agora, sua altura em metros (use a v�rgula para casa decimais):\n");
        scanf("%f", &alturaIMC);

            while (massaIMC<=0 || alturaIMC<=0)
            {
                printf("Valores inv�lidos para massa e altura. Digite sua massa, em KG, e sua altura, em metros:\n");
                printf("Digite sua massa, em KG (use a v�rgula para casa decimais):\n");
                scanf("%f", &massaIMC);
                printf("Digite, agora, sua altura em metros (use a v�rgula para casa decimais):\n");
                scanf("%f", &alturaIMC);

            }

        CalcIMC(massaIMC, alturaIMC);

            if (sexoIMC==1)
            {
            printf("\t\t\tFAIXA DE VALORES PARA O SEXO MASCULINO:\n\n");
            printf("\t\t\tIMC menor que 18: pessoas abaixo do peso.\n");
            printf("\t\t\tIMC entre 18 e 25: pessoas com peso normal.\n");
            printf("\t\t\tIMC entre 26 e 30: pessoas com sobrepeso.\n");
            printf("\t\t\tIMC entre 30 e 35: pessoas obesas.\n");
            printf("\t\t\tIMC entre 35 e 40: pessoas com obesidade moderada.\n");
            printf("\t\t\tIMC entre 40 e 50: pessoas com obesidade grave.\n");
            printf("\t\t\tIMC acima de 50: pessoas com obesidade grav�ssima.\n\n");
            printf("\t\t\tObrigado por usar o UrsoVerse! Cuide sempre da sua sa�de!\n\n");
            }
            if (sexoIMC==2)
            {
            printf("\t\t\tFAIXA DE VALORES PARA O SEXO FEMININO:\n\n");
            printf("\t\t\tIMC menor que 18: pessoas abaixo do peso.\n");
            printf("\t\t\tIMC entre 18 e 24: pessoas com peso normal.\n");
            printf("\t\t\tIMC entre 25 e 30: pessoas com sobrepeso.\n");
            printf("\t\t\tIMC entre 30 e 35: pessoas obesas.\n");
            printf("\t\t\tIMC entre 35 e 40: pessoas com obesidade moderada.\n");
            printf("\t\t\tIMC entre 40 e 50: pessoas com obesidade grave.\n");
            printf("\t\t\tIMC acima de 50: pessoas com obesidade grav�ssima.\n\n");
            printf("\t\t\tObrigado por usar o UrsoVerse! Cuide sempre da sua sa�de!\n\n");
            }
            do
            {
                printf("Gostaria de checar num novo valor de IMC?\n");
                printf("Se sim, digite novos valores.\n");
                printf("Se n�o, digite valores negativos para sua massa e altura.\n");
                printf("Vamos calcular seu IMC. Digite seu sexo: (1 - Masculino | 2 - Feminino)\n");
                scanf("%d", &sexoIMC);
                    if (sexoIMC!=1 && sexoIMC!=2)
                        {
                            do
                            {
                                printf("Valor inv�lido. Digite 1 para Masculino e 2 para Feminino.\n");
                                printf("Digite seu sexo: (1 - Masculino | 2 - Feminino)\n");
                                scanf("%d", &sexoIMC);
                            }while (sexoIMC!=1 && sexoIMC!=2);
                        }
                printf("Digite sua massa, em KG (use a v�rgula para casa decimais):\n");
                scanf("%f", &massaIMC);
                printf("Digite, agora, sua altura em metros (use a v�rgula para casa decimais):\n");
                scanf("%f", &alturaIMC);

                    if (massaIMC<0 && alturaIMC<0)
                    {
                        printf("Obrigado por usar o UrsoVerse! Sa�de em primeiro lugar!.\n");
                        printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
                        return main(scanf("%d", &option));

                    }

                CalcIMC(massaIMC, alturaIMC);

                 if (sexoIMC==1)
                    {
                    printf("\t\t\tFAIXA DE VALORES PARA O SEXO MASCULINO:\n\n");
                    printf("\t\t\tIMC menor que 18: pessoas abaixo do peso.\n");
                    printf("\t\t\tIMC entre 18 e 25: pessoas com peso normal.\n");
                    printf("\t\t\tIMC entre 26 e 30: pessoas com sobrepeso.\n");
                    printf("\t\t\tIMC entre 30 e 35: pessoas obesas.\n");
                    printf("\t\t\tIMC entre 35 e 40: pessoas com obesidade moderada.\n");
                    printf("\t\t\tIMC entre 40 e 50: pessoas com obesidade grave.\n");
                    printf("\t\t\tIMC acima de 50: pessoas com obesidade grav�ssima.\n\n");
                    printf("\t\t\tObrigado por usar o UrsoVerse! Cuide sempre da sua sa�de!\n\n");
                    }
                    if (sexoIMC==2)
                    {
                    printf("\t\t\tFAIXA DE VALORES PARA O SEXO FEMININO:\n\n");
                    printf("\t\t\tIMC menor que 18: pessoas abaixo do peso.\n");
                    printf("\t\t\tIMC entre 18 e 24: pessoas com peso normal.\n");
                    printf("\t\t\tIMC entre 25 e 30: pessoas com sobrepeso.\n");
                    printf("\t\t\tIMC entre 30 e 35: pessoas obesas.\n");
                    printf("\t\t\tIMC entre 35 e 40: pessoas com obesidade moderada.\n");
                    printf("\t\t\tIMC entre 40 e 50: pessoas com obesidade grave.\n");
                    printf("\t\t\tIMC acima de 50: pessoas com obesidade grav�ssima.\n\n");
                    printf("\t\t\tObrigado por usar o UrsoVerse! Cuide sempre da sua sa�de!\n\n");
                    }

            }while (massaIMC>0 && alturaIMC>0);
            printf("\t\t\tObrigado por usar o UrsoVerse! Cuide sempre da sua sa�de!\n\n\n");
            printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
            return main(scanf("%d", &option));

        break;

    case 7:
        printf("\t\t\t\tFUN��O CALCULADORA B�SICA\n\n");
        printf("\t\t\t\t\tINSTRU��ES\n\n");
        printf("\t\tEm caso de valores com casas decimais, utilize sempre a V�RGULA como separador -> Ex: 13,4\n\n");
        printf("\t\t\tOpera��es dispon�veis '+', '-', '*', '/' e '%%'\n");
        printf("\t\t\tExemplos de opera��o: 17-5, 3*7, 45/3, 15%%250 etc\n");
        printf("\t\t\tPara encerrar a fun��o, insira os dois valores como 0\n\n\n");
           do
            {
            printf("Digite a opera��o desejada:\n");
            scanf("%f%c%f", &num1, &sinalcalc, &num2);
            Calculator(num1, num2, sinalcalc);

            }while (num1!=0 && num2!=0);
            printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
            return main(scanf("%d", &option));
        break;

    case 8:
        printf("\t\t\t\tSoftware de Revis�o - UrsoVerse 2022_01 v1.0\n\n");
        printf("\t\t\t\tP�GINA 2\n\n");
        printf("\t\t\t\tFun��es dispon�veis:\n\n");
        printf("\t\t\t\t1 - C�lculo de Fatorial.\n");
        printf("\t\t\t\t2 - Definir se um n�mero � primo ou n�o.\n");
        printf("\t\t\t\t3 - Imprimir a Sequ�ncia de Fibonacci com N termos.\n");
        printf("\t\t\t\t4 - C�lculo de Juros Simples.\n");
        printf("\t\t\t\t5 - C�lculo de Juros Compostos.\n");
        printf("\t\t\t\t6 - Encerrar o Programa.\n\n");
        printf("Digite uma das op��es acima:");
        scanf("%d", &option2);

        switch(option2)
        {
            case 1:
            printf("\t\t\t\tFUN��O C�LCULO DE FATORIAL\n\n");
            do{
            anos=1;
            meses=1;
            printf("\t\tPara encerrar a fun��o, digite zero ou um n�mero negativo.\n\n");
            printf("Digite um n�mero inteiro para calcularmos seu fatorial:\n");
            scanf("%d", &dias);
                if (dias==0)
                {
                printf("O fatorial de %d � igual a 1.\n\n", dias);
                printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
                return main(scanf("%d", &option2));
                }
                for(anos=1; anos<=dias;anos++)
                {
                    meses=meses*anos;
                }
                printf("O fatorial de %d �: %d\n", dias, meses);
                }while (dias>0);
                printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
                return main(scanf("%d", &option2));
                break;

            case 2:
                printf("\t\t\t\tFUN��O N�MEROS PRIMOS\n\n");
                printf("Vamos descobrir se um n�mero inteiro, positivo, � primo.\n");
                printf("Para isso, digite um n�mero:\n");
                scanf("%d", &anos);
                while (anos<=0)
                {
                printf("A fun��o 'n�meros primos' � v�lida, apenas, para inteiros positivos.\n");
                printf("Digite um n�mero inteiro e positivo:\n");
                scanf("%d", &anos);
                }
                PrimeNumber(anos);
                do
                {
                printf("Gostaria de usar a aplica��o novamente? Se sim, digite um n�mero inteiro e positivo.\n");
                printf("Caso queira voltar ao menu inicial, digite zero ou algum valor inteiro negativo.\n");
                scanf("%d", &anos);
                PrimeNumber(anos);
                }while (anos>0);
                printf("Obrigado por usar o aplicativo UrsoVerse!\n\n");
                printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
                return main(scanf("%d", &option2));
                break;

            case 3:
                printf("\t\t\t\t\tFUN��O SEQU�NCIA DE FIBONACCI\n\n");
                printf("\tA sequ�ncia de Fibonacci consiste numa sucess�o infinita de n�meros que obedecem um padr�o.\n");
                printf("\t\t\tCada elemento subsequente � a soma dos dois anteriores.\n\n");
                printf("\t\t\tExemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55... etc.\n\n");
                printf("Digite o n�mero de termos que voc� gostaria de ver na sua sequ�ncia de Fibonacci:\n");
                scanf("%d", &anos);
                Fibonacci(anos);
                do
                {
                printf("Gostaria de formar a Sequ�ncia de Fibonacci com um n�mero diferente de termos?\n");
                printf("Se sim, digite um valor inteiro e positivo.\n");
                printf("Se n�o, digite zero ou um valor inteiro e negativo.\n");
                scanf("%d", &anos);
                if (anos<=0)
                {
                    printf("Obrigado por usar o aplicativo Fibonacci do UrsoVerse! Math is power!\n\n");
                    printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
                    return main(scanf("%d", &option2));
                }
                Fibonacci(anos);
                }while (anos>0);
                return main(scanf("%d", &option2));
                break;

            case 4:
                printf("\t\t\t\tFUN��O JUROS SIMPLES\n\n");
                printf("Essa fun��o calcula a varia��o de um montante inicial em fun��o de uma taxa de juros X e um tempo Y.\n");
                printf("Em caso de valores com casas decimais, use sempre a V�RGULA para a separa��o -> Ex: 1243,55.\n\n\n");
                printf("Para come�ar, informe o valor do seu montante inicial (sem o s�mbolo R$):\n");
                scanf("%f", &num1);
                printf("Informe, agora, a taxa de juros que ir� incidir sobre o montante (sem o s�mbolo %%):\n");
                scanf("%f", &media1);
                printf("Informe o tempo, em meses, que essa taxa de juros ir� incidir sobre o montante:\n");
                scanf("%d", &meses);
                JuroSimples(num1, media1, meses);
                printf("Obrigado por usar o UrsoVerse!\n\n");
                do
                {
                    printf("Gostaria de calcular um novo valor?\n");
                    printf("Se sim, informe, novamente, os tr�s valores. Se n�o, informe cada um dos tr�s valores como zero.\n");
                    printf("Para come�ar, informe o valor do seu montante inicial:\n");
                    scanf("%f", &num1);
                    printf("Informe, agora, a taxa de juros que ir� incidir sobre o montante:\n");
                    scanf("%f", &media1);
                    printf("Informe o tempo, em meses, que essa taxa de juros ir� incidir sobre o montante:\n");
                    scanf("%d", &meses);
                    JuroSimples(num1, media1, meses);
                    printf("Obrigado por usar o UrsoVerse!\n\n");
                }while (num1>0 && media1>0 && meses>0);
                printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
                return main(scanf("%d", &option2));
                break;

            case 5:
                printf("\t\t\t\tFUN��O JUROS COMPOSTOS\n\n");
                printf("\tVamos calcular quanto seu dinheiro vai render, em alguma aplica��o, com o passar dos meses!\n");
                printf("Em caso de valores com casas decimais, use sempre a V�RGULA para a separa��o -> Ex: 1243,55.\n\n\n");
                printf("Digite o valor do montante inicial a ser depositado na aplica��o (sem o s�mbolo R$):\n");
                scanf("%f", &media1); //media1 � o valor do montante inicial;
                printf("Digite, agora, o valor da taxa de juros da sua aplica��o (sem o s�mbolo %%):\n");
                scanf("%f", &num1); //num1 � o valor da taxa de juros;
                printf("Voce planeja depositar algum valor fixo mensal? Digite '1' para SIM ou '2' para NAO:\n");
                scanf("%d", &option);
                        if (option==1)
                            {
                                printf("Digite quanto, em media, voce planeja depositar por mes:\n");
                                scanf("%f", &media2); //media2 � o valor depositado por m�s (aporte);
                                printf("Digite, agora, o numero de meses para calcularmos o valor final:\n");
                                scanf("%d", &meses);
                                printf("Vamos calcular...\n");
                                CheckpoupancaMensal(media1, num1, meses, media2);

                                        do
                                        {
                                        printf("Gostaria de fazer uma nova simula��o com esse mesmo montante inicial?\n");
                                        printf("Se SIM, digite novos valores para o aporte e para o tempo de rendimento da aplica��o.\n");
                                        printf("Se N�O, digite valores negativos ou zero para o aporte e para o tempo:\n");
                                        printf("Digite um novo valor de aporte mensal (sem o s�mbolo R$):\n");
                                        scanf("%f", &media2);
                                        printf("Gostaria de simular o valor final com mais tempo? Digite o numero de meses:\n");
                                        scanf("%d", &meses);
                                        CheckpoupancaMensal(media1, num1, meses, media2);
                                        }while (media2>0 && meses>0);

                                printf("Obrigado por usar o UrsoVerse! Cuide bem do seu dinheiro!\n");
                                printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
                                return main(scanf("%d", &option2));
                            }
                        if (option==2)
                            {
                                printf("Digite, agora, o numero de meses para calcularmos o valor final:\n");
                                scanf("%d", &meses);
                                printf("Vamos calcular...\n");
                                Checkpoupanca(media1, num1, meses);

                                        do
                                        {
                                        printf("Gostaria de simular o valor final com mais tempo? Se n�o, digite um valor negativo para os meses.\n");
                                        printf("Digite o numero de meses:\n");
                                        scanf("%d", &meses);
                                        Checkpoupanca(media1, num1, meses);
                                        }while (meses>0);

                                printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
                                return main(scanf("%d", &option2));
                            }
                printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
                return main(scanf("%d", &option2));
                break;

            case 6:
                printf("\t\t\t\tMuito obrigado por usar o UrsoVerse. Espero te ver em breve novamente!");
                return 0;
                break;

            default:
                printf("Op��o inv�lida. Selecione uma das op��es dispon�veis no menu acima.\n");
                printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
                return main(scanf("%d", &option2));
                break;

        }
        break;

    case 9:
        printf("\t\t\t\tMuito obrigado por usar o UrsoVerse. Espero te ver em breve novamente!");
        return 0;
        break;
    default:
        printf("Op��o inv�lida. Selecione uma das op��es dispon�veis no menu acima.\n");
        printf("Digite qualquer n�mero e aperte ENTER para continuar.\n");
        return main(scanf("%d", &option));
        break;


    }

}
