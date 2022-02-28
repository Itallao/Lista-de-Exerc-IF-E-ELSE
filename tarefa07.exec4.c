/*
  Tarefa 7-  Exercicio 4- Receber três números e dizer se existe algum número repetido entre eles. Em caso afirmativo, mostre qual o número esta 
  repetido.

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
    
    
    if(number1==number2){
    printf("Repetido %.f", number1);	
	}
   else{
   		if(number2==number3){
   		printf(" Repetido %.f", number2);
		}
			else{
					if(number3==number1){
					printf(" Repetido %.f", number3);	
					}
				}
	   }
   	
   
	return 0;	
   
}
	
