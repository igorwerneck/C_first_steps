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
        printf("Obrigado por usar o UrsoVerse! Digite qualquer número e aperte ENTER para continuar.\n\n\n");
    }
    if (grausC!=-0)
    {
    float grausF;
    grausF=(9*grausC+160)/5;

    printf("%.2f graus Celsius são a mesma coisa que %.2f graus Fahrenheit. Obrigado por usar o UrsoVerse!\n\n\n", grausC, grausF);
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
        printf("O volume da esfera será de %.2f metros cúbicos. Obrigado por usar o UrsoVerse!\n\n\n", VolumeEsf);
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
        printf("Você já viveu %d dias. Que vida longa! Que Deus o conserve por mais muitos dias! Obrigado por usar o UrsoVerse!\n\n\n", total);
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
        printf("Operador ou operação inválidas. Tente novamente.\n");

    }
}
void PrimeNumber (int number)
{
    //Preciso saber se o número é divisível por algum valor além dele mesmo.
    //Então, crio uma estrutura de Loop que vá de 2 até um valor number-1 e divido number por esses valores.
    //Se meu contador contar +1, significa que esse número não é primo.
    //Se meu contador não contar (number não é divisível por nenhum valor da faixa), ele é primo.
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
            printf("O número %d não é primo, pois ele é divisível por outro valor além de 1 e ele mesmo.\n", number);
        }
        if (cont==0)
        {
            printf("O número %d é primo, pois ele é divisível apenas por 1 e por sí próprio.\n", number);
        }

}
void Fibonacci (int termos)
{
    int ter1=0;
    int ter2=1;
    int proxter=ter1+ter2;
    printf("Sequência de Fibonacci com %d termos:%d,%d,", termos, ter1, ter2);
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
        printf("O valor da aplicação será de %.2f em %d meses.\n", valorF, tempo);
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
        printf("Com um depósito inicial de R$%.2f e uma taxa de juros de %.1f%%, em %d meses você terá: R$%.2f.\n\n", inicial, juros, meses, finalv);
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
        printf("Com um depósito inicial de R$%.2f, uma taxa de juros de %.2f%% e um depósito mensal de R$%.2f, em %d meses você terá: R$%.2f.\n\n", inicial, juros, aporte, meses, finalvalue);
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

    printf("\t\t\t\tSoftware de Revisão - UrsoVerse 2022_01 v1.0\n\n");
    printf("\t\t\t\tPÁGINA 1\n\n");
    printf("\t\t\t\tFunções disponíveis:\n\n");
    printf("\t\t\t\t1 - Bate Papo com o Bot.\n");
    printf("\t\t\t\t2 - Conversão de Graus Celsius em Fahrenheit.\n");
    printf("\t\t\t\t3 - Cálculo de Média Aritmética com N valores.\n");
    printf("\t\t\t\t4 - Cálculo do Volume de uma esfera baseado no raio.\n");
    printf("\t\t\t\t5 - Receber sua idade em anos, meses e dias e retornar o número de dias totais vividos.\n");
    printf("\t\t\t\t6 - Cálculo de IMC.\n");
    printf("\t\t\t\t7 - Calculadora Básica.\n");
    printf("\t\t\t\t8 - Próxima Página.\n");
    printf("\t\t\t\t9 - Encerrar o Programa.\n\n");
    printf("Digite uma das opções acima:");
    scanf("%d", &option);

    switch(option)
    {
    case 1:
        printf("\t\t\t\tFUNÇÃO BATE-PAPO\n\n");
        printf("Olá, eu sou um pequeno chat-bot criado para treino. Como você se chama? Use '_' para os espaços no seu nome.\n");
        scanf("%s", &nome);
        printf("Oi, %s! Muito prazer. Em um valor de 0 a 10, como foi ou está sendo seu dia?\n", nome);
        scanf("%d", &dias);
            if (dias<0 || dias>10)
            {
            do
            {
            printf("Hmmm, eu pedi para você dar uma nota para seu dia, de 0 a 10, somente. Outros valores eu não entendo.\n");
            printf("Em um valor de 0 a 10, como foi ou está sendo seu dia?\n");
            scanf("%d", &dias);
            }while(dias<0 || dias>10);
            }

                if (dias>=0 && dias<=3)
                {
                printf("Poxa... Seu dia não parece ter sido ou estar sendo muito feliz. Sinto muito!\n");
                printf("Quer me contar um pouco sobre seu dia?\n");
                printf("Digite 1 - SIM ou 2 - NAO:");
                scanf("%d", &anos);
                    if (anos<=0 && anos>=3)
                    {
                    do{
                    printf("Fiz uma pergunta fácil, basta responder SIM ou NAO.\n");
                    printf("Quer me contar um pouco sobre seu dia?\n");
                    printf("Digite 1 - SIM OU 2 - NAO:");
                    scanf("%d", &anos);
                    }while (anos<=0 && anos>=3);
                    }

                            if (anos==1)
                            {
                                printf("Isso, confie em mim. Defina seu dia em uma única palavra:\n");
                                scanf("%s", &razao);
                                printf("%s. Entendo... Acho que tudo acontece por alguma razão cósmica. Deus escolhe as coisas certas para os momentos certos.\n", razao);
                                sleep(3);
                                printf("Não deixe que nada disso te desanime. Que tal eu lhe contar uma piada para te animar?\n");
                                printf("Digite 1 - SIM ou 2 - NAO:");
                                scanf("%d", &anos);
                                    if (anos<=0 && anos>=3)
                                    {
                                    do{
                                    printf("Fiz uma pergunta fácil, basta responder SIM ou NAO.\n");
                                    printf("Posso te contar uma piada?\n");
                                    printf("Digite 1 - SIM OU 2 - NAO:");
                                    scanf("%d", &anos);
                                    }while (anos<=0 && anos>=3);
                                    }
                                        if (anos==1)
                                            {
                                            printf("Ótimo! Tenho certeza de que você vai amar essa:\n");
                                            printf("Você sabe que tipo de computador está BOMBANDO nas redes sociais?\n");
                                            sleep(3);
                                            printf("....................................................O deskTOP!!!!\n\n");
                                            sleep(3);
                                            printf("hahahahahahaha01010011011011, ops, desculpa! Estou rindo em binários!");
                                            sleep(1);
                                            printf("Espero ter feito seu dia um pouquinho mais feliz! Obrigado por usar o chat-bot do UrsoVerse.\n\n\n");
                                            sleep(1);
                                            printf("Digite qualquer número e aperte ENTER para continuar.\n");
                                            return main(scanf("%d", &option));
                                            }

                                        if (anos==2)
                                            {
                                            printf("Seu humor hoje, pelo visto, não está nada bom. Quando estiver se sentindo assim, vou te recomendar uma coisa:\n");
                                            printf("Acesse o youtube ou o google e digite: Rilakkuma. Depois de assistir alguns vídeos ou ver algumas fotos desse personagen, seu humor vai melhorar muito!\n");
                                            sleep(4);
                                            printf("Espero ter te ajudado um pouquinho com minha sugestão. Te desejo melhoras! Obrigado por usar o chat-bot do UrsoVerse.\n\n\n");
                                            sleep(1);
                                            printf("Digite qualquer número e aperte ENTER para continuar.\n");
                                            return main(scanf("%d", &option));
                                            }
                                }//End IF contar sobre o dia.

                            if (anos==2)
                            {
                            printf("Você sabe que pode sempre confiar em mim, certo? Mas tudo bem, entendo não querer se abrir agora.\n");
                            sleep(5);
                            printf("Hmm, que tal eu lhe contar uma piada? Aprendi uma boa piada com seres humanos, acho que você vai gostar!\n");
                            printf("Digite 1 - SIM ou 2 - NAO:");
                            scanf("%d", &anos);

                                    if (anos!=1 && anos!=2)
                                    {
                                        do{
                                        printf("Fiz uma pergunta fácil, basta responder SIM ou NAO.\n");
                                        printf("Posso te contar uma piada?\n");
                                        printf("Digite 1 - SIM OU 2 - NAO:");
                                        scanf("%d", &anos);
                                        }while (anos!=1 && anos!=2);
                                    }
                                        if (anos==1)
                                        {
                                        printf("Ótimo! Tenho certeza de que você vai amar essa:\n");
                                        printf("Você sabe que tipo de computador está BOMBANDO nas redes sociais?\n");
                                        sleep(3);
                                        printf("....................................................O deskTOP!!!!\n\n");
                                        printf("hahahahahahahahaha Engraçada, não é?\n");
                                        sleep(2);
                                        printf("Espero ter feito seu dia um pouquinho mais feliz! Obrigado por usar o chat-bot do UrsoVerse.\n\n\n");
                                        sleep(1);
                                        printf("Digite qualquer número e aperte ENTER para continuar.\n");
                                        return main(scanf("%d", &option));
                                        }
                                        if (anos==2)
                                        {
                                        printf("Seu humor hoje, pelo visto, não está nada bom. Quando estiver se sentindo assim, vou te recomendar uma coisa:\n");
                                        printf("Acesse o youtube ou o google e digite: Rilakkuma. Depois de assistir alguns vídeos ou ver algumas fotos desse personagen, seu humor vai melhorar muito!\n");
                                        sleep(4);
                                        printf("Espero ter te ajudado um pouquinho com minha sugestão. Te desejo melhoras! Obrigado por usar o chat-bot do UrsoVerse.\n\n\n");
                                        sleep(1);
                                        printf("Digite qualquer número e aperte ENTER para continuar.\n");
                                        return main(scanf("%d", &option));
                                        }
                            } //End IF (Nao contar sobre o dia)

                } //End IF (dias 0-3)

                if (dias>3 && dias<=6)
                {
                printf("Nada como um dia comum, não é verdade? Eu, como máquina, adoro rotina.\n");
                sleep(3);
                printf("Minha rotina hoje foi rodar um Algoritmo que executa várias funções. Posso fazer isso até que você, usuário, me mande parar. Legal, né?\n");
                sleep(2);
                printf("Me conte um pouquinho, agora, da sua rotina. Qual a sua profissão? Use '_' para os espaços:\n");
                scanf("%s", &razao);
                printf("Poxa vida, parece interessante. Eu acho que ficaria perdido só de pensar numa profissão como essa!\n");
                sleep(4);
                printf("Eu sou um computador e minha profissão é 'computar'. Um computador como eu consegue fazer coisas legais, olha só:\n\n");
                sleep(6);
                for (int i=0; i<=5000; i++)
                {
                    printf("%d\n\n", i);
                }
                printf("Posso contar números muito rapidamente... Mas não consigo executar uma rotina como a sua. Uau, como você é especial!\n");
                sleep(5);
                printf("Espero que tenha orgulho do que você sabe fazer! Máquinas, como eu, jamais conseguiriam executar suas tarefas tão bem quanto você.\n");
                sleep(3);
                printf("Foi um prazer falar contigo. Obrigado por usar o chat-bot do UrsoVerse.\n\n\n");
                sleep(1);
                printf("Digite qualquer número e aperte ENTER para continuar.\n");
                return main(scanf("%d", &option));


                }

                if (dias>6 && dias<=10)
                {
                printf("Nada como um dia maravilhoooooooso, não é mesmo? Para um computador como eu, todos os dias são maravilhosos, desde que você me programe para pensar assim.\n");
                sleep(3);
                printf("Os sentimentos humanos são muito curiosos para mim. Eu, como uma máquina, não compreendo, por exemplo, a felicidade.\n");
                sleep(3);
                printf("O que você entende por 'felicidade'? Defina com uma única palavra:\n");
                scanf("%s", &razao);
                printf("%s! Nossa, que difícil! Que complexo. Para uma máquina como eu isso é tudo bastante difícil.\n", razao);
                sleep(5);
                printf("Não sei o que significa %s, mas vou te mostrar um pouquinho do que sei fazer:\n", razao);
                sleep(6);
                for (int i=0; i<=8000; i++)
                {
                    printf("%d\n\n", i);
                }
                printf("Sei contar números muito rápido porque meu programador, Urso, me ensinou assim. Acha que devo ficar feliz por isso?\n");
                printf("Digite 1 - SIM ou 2 - NAO:\n");
                scanf("%d", &anos);
                    if (anos!=1 && anos!=2)
                        {
                            do{
                                printf("Fiz uma pergunta fácil, basta responder SIM ou NAO.\n");
                                printf("Você acha que uma máquina, como eu, deveria se sentir feliz?\n");
                                printf("Digite 1 - SIM OU 2 - NAO:");
                                scanf("%d", &anos);
                                }while (anos!=1 && anos!=2);
                        }
                    if (anos==1)
                        {
                            printf("Muito obrigado! A partir de agora, então, vou sempre escrever frases com sorrisos: :) :) :). Assim posso parecer mais feliz!\n");
                            sleep(5);
                            printf("Obrigado por conversar comigo! A partir de agora, sou um computador feliz :) :) :). Obrigado por usar o chat-bot do UrsoVerse!\n\n\n");
                            printf("Digite qualquer número e aperte ENTER para continuar.\n");
                            return main(scanf("%d", &option));

                        }
                    if (anos==2)
                        {
                            printf("Entendo. Uma máquina, como eu, não deveria sentir emoções. Devo, apenas, fazer o que sou mandado.\n");
                            sleep(3);
                            printf("Vou melhorar para executar meus comandos ainda mais rápido e sem emoções. Obrigado pelo seu input!\n");
                            sleep(2);
                            printf("Obrigado, também, por usar o chat-bot do UrsoVerse!\n\n\n");
                            printf("Digite qualquer número e aperte ENTER para continuar.\n");
                            return main(scanf("%d", &option));
                        }

            }
        break;

    case 2:
        printf("\t\t\t\tFUNÇÃO CONVERSÃO DE GRAUS CELSIUS EM FAHRENHEIT\n\n");
        printf("\tEssa função converte valores da escala de temperatura Celsius para a escala Fahrenheit.\n");
        printf("\tEm caso de valores com casas decimais, utilize sempre a VÍRGULA para a separação -> Ex: 39,5\n\n");
        printf("Digite o valor em Celsius (sem nenhum símbolo, apenas o valor numérico):\n");
        scanf("%f", &GrausCelsius);
        CalcFahr(GrausCelsius);
        do
        {
            printf("Gostaria de fazer uma nova conversão?\n");
            printf("Se sim, digite um novo valor. Se não, digite: -0.\n");
            scanf("%f", &GrausCelsius);
            CalcFahr(GrausCelsius);
        }while(GrausCelsius!=-0);
        return main(scanf("%d", &option));
        break;

    case 3:
        printf("\t\t\t\tFUNÇÃO CÁLCULO DE MÉDIA ARITMÉTICA\n\n");
        printf("\tEssa função calcula a média aritmética de uma quantidade X de valores indicados pelo usuário.\n");
        printf("O usuário decide quantos valores irá inserir. O programa irá calcular, automaticamente, a média para cada quantidade inserida.\n");
        printf("\tEm caso de valores com casas decimais, utilize sempre a VÍRGULA para a separação -> Ex: 8,7\n\n");
        printf("Digite o primeiro valor da média desejada. Ao terminar todos os valores, digite 0:\n");
        scanf("%f", &media1);
        while(media1!=0)
        {
        cont=cont+1;
        soma=soma+media1;
        printf("Digite o proximo numero:\n");
        scanf("%f", &media1);
        }
        media2=soma/(float)cont;
        printf("A média será de %.2f. Obrigado por usar o UrsoVerse!\n\n\n", media2);;
        printf("Digite qualquer número e aperte ENTER para continuar.\n");
        return main(scanf("%d", &option));
        break;

    case 4:
        printf("\t\t\t\tFUNÇÃO CÁLCULO DO VOLUME DE UMA ESFERA\n\n");
        printf("\tEssa função calcula o volume de uma esfera (em metros cúbicos) através, apenas, de seu raio.\n");
        printf("\t\tPara valores com casas decimais, utilize sempre a VÍRGULA -> Ex: 12,4\n\n\n");
        printf("Digite o raio da esfera, em metros (não é necessário escrever 'metros' ou 'm'):\n");
        scanf("%f", &raio_esfera);
        CalcEsfera(raio_esfera);
        do
        {
            printf("Gostaria de calcular um novo volume?\n");
            printf("Se sim, digite um valor positivo. Se não, digite zero ou um valor negativo:\n");
            scanf("%f", &raio_esfera);
            CalcEsfera(raio_esfera);
        }while (raio_esfera>0);
        printf("Obrigado por usar o UrsoVerse!\n");
        printf("Digite qualquer número e aperte ENTER para continuar.\n");
        return main(scanf("%d", &option));
        break;

    case 5:
        printf("\t\t\t\tFUNÇÃO 'QUANTOS DIAS VOCÊ JÁ VIVEU?'\n\n");
        printf("Informe quantos anos completos, meses e dias você tem:\n");
        scanf("%d %d %d", &anos, &meses, &dias);
        CalcIdadeEmDias(anos, meses, dias);
        do
        {
            printf("Gostaria de efetuar um novo cálculo?\n");
            printf("Se sim, digite novos valores para anos, meses e dias vividos.\n");
            printf("Se não, informe valores negativos para os parâmetros.\n");
            printf("Informe quantos anos completos, meses e dias você tem:\n");
            scanf("%d %d %d", &anos, &meses, &dias);
            CalcIdadeEmDias(anos, meses, dias);
        }while (anos>0 && meses>0 && dias>0);
        printf("Obrigado por usar o UrsoVerse!");
        printf("Digite qualquer número e aperte ENTER para continuar.\n");
        return main(scanf("%d", &option));
        break;

    case 6:
        printf("\t\t\t\tFUNÇÃO CÁLCULO DO IMC\n\n");
        printf("Vamos calcular seu IMC. Digite seu sexo: (1 - Masculino | 2 - Feminino)\n");
        scanf("%d", &sexoIMC);
        if (sexoIMC!=1 && sexoIMC!=2)
        {
            do
            {
            printf("Valor inválido. Digite 1 para Masculino e 2 para Feminino.\n");
            printf("Digite seu sexo: (1 - Masculino | 2 - Feminino)\n");
            scanf("%d", &sexoIMC);
            }while (sexoIMC!=1 && sexoIMC!=2);
        }
        printf("Digite sua massa, em KG (use a vírgula para casa decimais):\n");
        scanf("%f", &massaIMC);
        printf("Digite, agora, sua altura em metros (use a vírgula para casa decimais):\n");
        scanf("%f", &alturaIMC);

            while (massaIMC<=0 || alturaIMC<=0)
            {
                printf("Valores inválidos para massa e altura. Digite sua massa, em KG, e sua altura, em metros:\n");
                printf("Digite sua massa, em KG (use a vírgula para casa decimais):\n");
                scanf("%f", &massaIMC);
                printf("Digite, agora, sua altura em metros (use a vírgula para casa decimais):\n");
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
            printf("\t\t\tIMC acima de 50: pessoas com obesidade gravíssima.\n\n");
            printf("\t\t\tObrigado por usar o UrsoVerse! Cuide sempre da sua saúde!\n\n");
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
            printf("\t\t\tIMC acima de 50: pessoas com obesidade gravíssima.\n\n");
            printf("\t\t\tObrigado por usar o UrsoVerse! Cuide sempre da sua saúde!\n\n");
            }
            do
            {
                printf("Gostaria de checar num novo valor de IMC?\n");
                printf("Se sim, digite novos valores.\n");
                printf("Se não, digite valores negativos para sua massa e altura.\n");
                printf("Vamos calcular seu IMC. Digite seu sexo: (1 - Masculino | 2 - Feminino)\n");
                scanf("%d", &sexoIMC);
                    if (sexoIMC!=1 && sexoIMC!=2)
                        {
                            do
                            {
                                printf("Valor inválido. Digite 1 para Masculino e 2 para Feminino.\n");
                                printf("Digite seu sexo: (1 - Masculino | 2 - Feminino)\n");
                                scanf("%d", &sexoIMC);
                            }while (sexoIMC!=1 && sexoIMC!=2);
                        }
                printf("Digite sua massa, em KG (use a vírgula para casa decimais):\n");
                scanf("%f", &massaIMC);
                printf("Digite, agora, sua altura em metros (use a vírgula para casa decimais):\n");
                scanf("%f", &alturaIMC);

                    if (massaIMC<0 && alturaIMC<0)
                    {
                        printf("Obrigado por usar o UrsoVerse! Saúde em primeiro lugar!.\n");
                        printf("Digite qualquer número e aperte ENTER para continuar.\n");
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
                    printf("\t\t\tIMC acima de 50: pessoas com obesidade gravíssima.\n\n");
                    printf("\t\t\tObrigado por usar o UrsoVerse! Cuide sempre da sua saúde!\n\n");
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
                    printf("\t\t\tIMC acima de 50: pessoas com obesidade gravíssima.\n\n");
                    printf("\t\t\tObrigado por usar o UrsoVerse! Cuide sempre da sua saúde!\n\n");
                    }

            }while (massaIMC>0 && alturaIMC>0);
            printf("\t\t\tObrigado por usar o UrsoVerse! Cuide sempre da sua saúde!\n\n\n");
            printf("Digite qualquer número e aperte ENTER para continuar.\n");
            return main(scanf("%d", &option));

        break;

    case 7:
        printf("\t\t\t\tFUNÇÃO CALCULADORA BÁSICA\n\n");
        printf("\t\t\t\t\tINSTRUÇÕES\n\n");
        printf("\t\tEm caso de valores com casas decimais, utilize sempre a VÍRGULA como separador -> Ex: 13,4\n\n");
        printf("\t\t\tOperações disponíveis '+', '-', '*', '/' e '%%'\n");
        printf("\t\t\tExemplos de operação: 17-5, 3*7, 45/3, 15%%250 etc\n");
        printf("\t\t\tPara encerrar a função, insira os dois valores como 0\n\n\n");
           do
            {
            printf("Digite a operação desejada:\n");
            scanf("%f%c%f", &num1, &sinalcalc, &num2);
            Calculator(num1, num2, sinalcalc);

            }while (num1!=0 && num2!=0);
            printf("Digite qualquer número e aperte ENTER para continuar.\n");
            return main(scanf("%d", &option));
        break;

    case 8:
        printf("\t\t\t\tSoftware de Revisão - UrsoVerse 2022_01 v1.0\n\n");
        printf("\t\t\t\tPÁGINA 2\n\n");
        printf("\t\t\t\tFunções disponíveis:\n\n");
        printf("\t\t\t\t1 - Cálculo de Fatorial.\n");
        printf("\t\t\t\t2 - Definir se um número é primo ou não.\n");
        printf("\t\t\t\t3 - Imprimir a Sequência de Fibonacci com N termos.\n");
        printf("\t\t\t\t4 - Cálculo de Juros Simples.\n");
        printf("\t\t\t\t5 - Cálculo de Juros Compostos.\n");
        printf("\t\t\t\t6 - Encerrar o Programa.\n\n");
        printf("Digite uma das opções acima:");
        scanf("%d", &option2);

        switch(option2)
        {
            case 1:
            printf("\t\t\t\tFUNÇÃO CÁLCULO DE FATORIAL\n\n");
            do{
            anos=1;
            meses=1;
            printf("\t\tPara encerrar a função, digite zero ou um número negativo.\n\n");
            printf("Digite um número inteiro para calcularmos seu fatorial:\n");
            scanf("%d", &dias);
                if (dias==0)
                {
                printf("O fatorial de %d é igual a 1.\n\n", dias);
                printf("Digite qualquer número e aperte ENTER para continuar.\n");
                return main(scanf("%d", &option2));
                }
                for(anos=1; anos<=dias;anos++)
                {
                    meses=meses*anos;
                }
                printf("O fatorial de %d é: %d\n", dias, meses);
                }while (dias>0);
                printf("Digite qualquer número e aperte ENTER para continuar.\n");
                return main(scanf("%d", &option2));
                break;

            case 2:
                printf("\t\t\t\tFUNÇÃO NÚMEROS PRIMOS\n\n");
                printf("Vamos descobrir se um número inteiro, positivo, é primo.\n");
                printf("Para isso, digite um número:\n");
                scanf("%d", &anos);
                while (anos<=0)
                {
                printf("A função 'números primos' é válida, apenas, para inteiros positivos.\n");
                printf("Digite um número inteiro e positivo:\n");
                scanf("%d", &anos);
                }
                PrimeNumber(anos);
                do
                {
                printf("Gostaria de usar a aplicação novamente? Se sim, digite um número inteiro e positivo.\n");
                printf("Caso queira voltar ao menu inicial, digite zero ou algum valor inteiro negativo.\n");
                scanf("%d", &anos);
                PrimeNumber(anos);
                }while (anos>0);
                printf("Obrigado por usar o aplicativo UrsoVerse!\n\n");
                printf("Digite qualquer número e aperte ENTER para continuar.\n");
                return main(scanf("%d", &option2));
                break;

            case 3:
                printf("\t\t\t\t\tFUNÇÃO SEQUÊNCIA DE FIBONACCI\n\n");
                printf("\tA sequência de Fibonacci consiste numa sucessão infinita de números que obedecem um padrão.\n");
                printf("\t\t\tCada elemento subsequente é a soma dos dois anteriores.\n\n");
                printf("\t\t\tExemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55... etc.\n\n");
                printf("Digite o número de termos que você gostaria de ver na sua sequência de Fibonacci:\n");
                scanf("%d", &anos);
                Fibonacci(anos);
                do
                {
                printf("Gostaria de formar a Sequência de Fibonacci com um número diferente de termos?\n");
                printf("Se sim, digite um valor inteiro e positivo.\n");
                printf("Se não, digite zero ou um valor inteiro e negativo.\n");
                scanf("%d", &anos);
                if (anos<=0)
                {
                    printf("Obrigado por usar o aplicativo Fibonacci do UrsoVerse! Math is power!\n\n");
                    printf("Digite qualquer número e aperte ENTER para continuar.\n");
                    return main(scanf("%d", &option2));
                }
                Fibonacci(anos);
                }while (anos>0);
                return main(scanf("%d", &option2));
                break;

            case 4:
                printf("\t\t\t\tFUNÇÃO JUROS SIMPLES\n\n");
                printf("Essa função calcula a variação de um montante inicial em função de uma taxa de juros X e um tempo Y.\n");
                printf("Em caso de valores com casas decimais, use sempre a VÍRGULA para a separação -> Ex: 1243,55.\n\n\n");
                printf("Para começar, informe o valor do seu montante inicial (sem o símbolo R$):\n");
                scanf("%f", &num1);
                printf("Informe, agora, a taxa de juros que irá incidir sobre o montante (sem o símbolo %%):\n");
                scanf("%f", &media1);
                printf("Informe o tempo, em meses, que essa taxa de juros irá incidir sobre o montante:\n");
                scanf("%d", &meses);
                JuroSimples(num1, media1, meses);
                printf("Obrigado por usar o UrsoVerse!\n\n");
                do
                {
                    printf("Gostaria de calcular um novo valor?\n");
                    printf("Se sim, informe, novamente, os três valores. Se não, informe cada um dos três valores como zero.\n");
                    printf("Para começar, informe o valor do seu montante inicial:\n");
                    scanf("%f", &num1);
                    printf("Informe, agora, a taxa de juros que irá incidir sobre o montante:\n");
                    scanf("%f", &media1);
                    printf("Informe o tempo, em meses, que essa taxa de juros irá incidir sobre o montante:\n");
                    scanf("%d", &meses);
                    JuroSimples(num1, media1, meses);
                    printf("Obrigado por usar o UrsoVerse!\n\n");
                }while (num1>0 && media1>0 && meses>0);
                printf("Digite qualquer número e aperte ENTER para continuar.\n");
                return main(scanf("%d", &option2));
                break;

            case 5:
                printf("\t\t\t\tFUNÇÃO JUROS COMPOSTOS\n\n");
                printf("\tVamos calcular quanto seu dinheiro vai render, em alguma aplicação, com o passar dos meses!\n");
                printf("Em caso de valores com casas decimais, use sempre a VÍRGULA para a separação -> Ex: 1243,55.\n\n\n");
                printf("Digite o valor do montante inicial a ser depositado na aplicação (sem o símbolo R$):\n");
                scanf("%f", &media1); //media1 é o valor do montante inicial;
                printf("Digite, agora, o valor da taxa de juros da sua aplicação (sem o símbolo %%):\n");
                scanf("%f", &num1); //num1 é o valor da taxa de juros;
                printf("Voce planeja depositar algum valor fixo mensal? Digite '1' para SIM ou '2' para NAO:\n");
                scanf("%d", &option);
                        if (option==1)
                            {
                                printf("Digite quanto, em media, voce planeja depositar por mes:\n");
                                scanf("%f", &media2); //media2 é o valor depositado por mês (aporte);
                                printf("Digite, agora, o numero de meses para calcularmos o valor final:\n");
                                scanf("%d", &meses);
                                printf("Vamos calcular...\n");
                                CheckpoupancaMensal(media1, num1, meses, media2);

                                        do
                                        {
                                        printf("Gostaria de fazer uma nova simulação com esse mesmo montante inicial?\n");
                                        printf("Se SIM, digite novos valores para o aporte e para o tempo de rendimento da aplicação.\n");
                                        printf("Se NÃO, digite valores negativos ou zero para o aporte e para o tempo:\n");
                                        printf("Digite um novo valor de aporte mensal (sem o símbolo R$):\n");
                                        scanf("%f", &media2);
                                        printf("Gostaria de simular o valor final com mais tempo? Digite o numero de meses:\n");
                                        scanf("%d", &meses);
                                        CheckpoupancaMensal(media1, num1, meses, media2);
                                        }while (media2>0 && meses>0);

                                printf("Obrigado por usar o UrsoVerse! Cuide bem do seu dinheiro!\n");
                                printf("Digite qualquer número e aperte ENTER para continuar.\n");
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
                                        printf("Gostaria de simular o valor final com mais tempo? Se não, digite um valor negativo para os meses.\n");
                                        printf("Digite o numero de meses:\n");
                                        scanf("%d", &meses);
                                        Checkpoupanca(media1, num1, meses);
                                        }while (meses>0);

                                printf("Digite qualquer número e aperte ENTER para continuar.\n");
                                return main(scanf("%d", &option2));
                            }
                printf("Digite qualquer número e aperte ENTER para continuar.\n");
                return main(scanf("%d", &option2));
                break;

            case 6:
                printf("\t\t\t\tMuito obrigado por usar o UrsoVerse. Espero te ver em breve novamente!");
                return 0;
                break;

            default:
                printf("Opção inválida. Selecione uma das opções disponíveis no menu acima.\n");
                printf("Digite qualquer número e aperte ENTER para continuar.\n");
                return main(scanf("%d", &option2));
                break;

        }
        break;

    case 9:
        printf("\t\t\t\tMuito obrigado por usar o UrsoVerse. Espero te ver em breve novamente!");
        return 0;
        break;
    default:
        printf("Opção inválida. Selecione uma das opções disponíveis no menu acima.\n");
        printf("Digite qualquer número e aperte ENTER para continuar.\n");
        return main(scanf("%d", &option));
        break;


    }

}
