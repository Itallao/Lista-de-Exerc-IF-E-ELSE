/*
  Tarefa 7-  Exercicio 4- Receber tr�s n�meros e dizer se existe algum n�mero repetido entre eles. Em caso afirmativo, mostre qual o n�mero esta 
  repetido.

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
	
