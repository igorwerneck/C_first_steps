#include <stdio.h>

int AddDigits (int number)
{
    int digit;
    int addition=0;
    while (number!=0)
    {
        digit=number%10;
        number=number/10;
        addition=addition+digit;
    }
    return addition;
}
int main()
{
    int num, additionf;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);
    additionf=AddDigits(num);
    printf("A soma dos digitos de %d foi: %d.\n", num, additionf);
    return 0;
}
