/*
  Tarefa -  Exercicio 1. Receber um número e informar se ele é positivo, negativo ou nulo.
	
	Author: Itallo Rodrigues Moreno
 
*/




#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
 	int number;

	printf("Digite um numero: "); scanf("%d", &number);

	if(number>0)
	{
	printf("%d e positivo", number);
	}
	
	else if(number<0)
	{
	printf("%d e negativo", number);
	}
	
	else
	{
	printf("%d e nulo", number);
	}

return 0;
}

	
