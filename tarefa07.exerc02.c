/*
  Tarefa 7-  Exercicio 2. Receber um intervalo (dois valores) e em seguida um número. Informar se o número está dentro, fora ou nas extremidades do 
  intervalo. Por exemplo, em um intervalo de 1 a 3, 0 está fora, 2 está dentro e 1 está em uma extremidade do intervalo.

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
    
	printf("\n Digite o número:");
    scanf("%f", &number);
    

    if(number==value1 || number==value2){
    	printf("Está na extremidade ");
	}
	
	else{
		if(number>=value1 && number<=value2){
			printf("Está dentro");
		}
	
		
		else{
		printf("Está fora!");
		}
	}
   
    

    
	   return 0;	
   
}
	
