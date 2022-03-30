#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
 int num;
 printf("Digite um numero: ");
 scanf("%d", &num);
 
 if (num % 2 == 0)
    {
      printf("Valor PAR e: %d", num + 5);
    }
    else if (num % 2 == 1)
    {
        printf("O Valor IMPAR e: %d", num + 8);
    }
 else
 return 0;
} 