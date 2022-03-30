#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
 int num;

 printf("Digite um numero: ");
 scanf("%d", &num);

 if (num >= 0)
 {
    printf("%d", num *= 2);
 }
 else if (num <= 0)
 {
    printf("%d", num *= 3);
 }
 else
 return 0;
}
 
 
 


