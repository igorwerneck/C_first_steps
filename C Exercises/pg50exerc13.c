#include <stdio.h>

void CharPrint (char signal)
{
    switch(signal)
    {
    case '<':
        printf("Sinal de menor.\n");
        break;
    case '>':
        printf("Sinal de maior.\n");
        break;
    case '=':
        printf("Sinal de igual.\n");
        break;
    default:
        printf("Outro caracter.\n");
    }
}
int main()
{
    char Signal;

    printf("Digite um dos caracteres a seguir: <, > ou =:\n");
    scanf("%c", &Signal);
    CharPrint(Signal);
    return 0;
}
