#include <stdio.h>

/*Nesse exercicio, escrevi uma funcao para retornar a divisao inteira do
dividendo pelo divisor e armazenei, no parametro r, passado por REFERENCIA,
o resto da divisao.*/

int divisao (int dividendo, int divisor, int *r)
{
    int quociente;
    quociente=dividendo/divisor;
    *r=dividendo%divisor;
    return quociente;
}
int main()
{
    int r, d;
    d=divisao(35,3,&r);
    printf("Resultado: %d Resto: %d.\n", d, r);

}
