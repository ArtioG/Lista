#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
 int opcao;
 float valor = 300;
 float valorFinal;
 
 printf("\n=======================\n");
 printf("O valor a ser pago e de 300 reais");
 printf("\n=======================\n");

 printf("Escolha uma opcao abaixo: \n\n1- Dinhero ou cheque\n2- A vista no cartao de credito\n3- Duas vezes mais juros de 10 porcento\n4- Sair\n\nOpcao: ");
 scanf("%d", &opcao);

 switch (opcao)
 {
 case 1:
    valorFinal = valor - (valor * 0.1);
    printf("O valor sera de: %2.f", valorFinal);

     break;
 case 2:
    valorFinal = valor - (valor * 0.15);
    printf("O valor sera de: %2.f", valorFinal);
     
     break;
 case 3:
    valorFinal = 2/(valor + (valor * 0.1));
    printf("O valor sera de: %2.f", valorFinal);
     break;
 case 4:
     return 0;
     break;
 default:
    printf("Opcao invalida.\n");
    system("pause");
    system("cls");
 
 }
 return 0;
} 