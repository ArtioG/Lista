#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int num;

    printf("Digite um numero para saber se ele e impar ou par: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("O numero e PAR");
    }
    else
    {
        printf("O numero e IMPAR");
    }
    return 0;
}