/*
  Tarefa 7-  Exercicio 5-  Receber tr�s n�meros e mostrar qual � o maior deles.

 	Author: Itallo Rodrigues Moreno
*/




#include <stdio.h>  
#include <locale.h> 

int main ()
{
		setlocale(LC_ALL, "Portuguese");
    
   
   float number1, number2, number3;

     printf("Digite o primeiro n�mero:");
	scanf("%f", &number1);
	
	printf("Digite o segundo n�mero:");
	scanf("%f", &number2);
	
	printf("Digite o terceiro n�mero:");
	scanf("%f", &number3);
    
	if(number1>number2 || number1>number3){
   	printf("Maior: %.f", number1);
   	}
    else{
    		if(number2>number1 || number2>number3){
			printf("Maior: %.f", number2);
			}
		
	
			else {
					printf("Maior:%.f", number3);
				}
    
		}
    
	   return 0;	
   
}
	
