/*
  Tarefa 7-  Exercicio 2. Receber um intervalo (dois valores) e em seguida um n�mero. Informar se o n�mero est� dentro, fora ou nas extremidades do 
  intervalo. Por exemplo, em um intervalo de 1 a 3, 0 est� fora, 2 est� dentro e 1 est� em uma extremidade do intervalo.

 	Author: Itallo Rodrigues Moreno
*/




#include <stdio.h>  
#include <locale.h> 

int main ()
{
		setlocale(LC_ALL, "Portuguese");
    
  
   float value1, value2, number;

    printf("Digite o valor1:");
    
	scanf("%f", &value1);
    
	printf("Digite o valor2:");
    scanf("%f", &value2);
    
	printf("\n Digite o n�mero:");
    scanf("%f", &number);
    

    if(number==value1 || number==value2){
    	printf("Est� na extremidade ");
	}
	
	else{
		if(number>=value1 && number<=value2){
			printf("Est� dentro");
		}
	
		
		else{
		printf("Est� fora!");
		}
	}
   
    

    
	   return 0;	
   
}
	
