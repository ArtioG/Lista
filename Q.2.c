#include <stdlib.h>
#include <stdio.h>

int main ()
{
 char sexo;
 int estadoCivil;
 int anosCasado; 

 printf("Digite o seu sexo M para masculino e F para feminino: ");
 scanf("%c", &sexo);
 printf("Digite o seu estado civil(1- Casado e 2- Solteiro): ");
 scanf("%i", &estadoCivil);

 if (sexo == 'F')
 { 
    printf("voce e mulher: ");
    if (estadoCivil == 1)
    {
        printf("\nDigite quantos anos de casado voce tem: ");
        scanf("%d", &anosCasado);
    }
 }
 else if (sexo == 'F')
 {
    printf("voce é mulher: ");
 }
  
 else if (sexo == 'M')
 {
    printf("voce e homem");
 }
 else
 {
    printf("sexo não reconhecido");
 }
 return 0;
}
  
