/*
  Tarefa 7-  Exercicio 5-  Receber três números e mostrar qual é o maior deles.

 	Author: Itallo Rodrigues Moreno
*/




#include <stdio.h>  
#include <locale.h> 

int main ()
{
		setlocale(LC_ALL, "Portuguese");
    
   
   float number1, number2, number3;

     printf("Digite o primeiro número:");
	scanf("%f", &number1);
	
	printf("Digite o segundo número:");
	scanf("%f", &number2);
	
	printf("Digite o terceiro número:");
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
	
