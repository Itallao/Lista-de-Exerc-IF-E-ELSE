/*
  Tarefa 7 -  Exercicio 6- Implementar uma calculadora onde o usu�rio digita dois n�meros e uma op��o, que deve ser 1 para adi��o, 2 para subtra��o, 
  3 para multiplica��o e 4 para divis�o. Mostrar na tela caso seja informada uma op��o inv�lida.
   
	Author: Itallo Rodrigues Moreno

 
*/




#include <stdio.h>  
#include <locale.h> 

int main ()
{
		setlocale(LC_ALL, "Portuguese");
    
   
   float number1, number2, result; 
   int option;
  
    
	printf(" Digite o num�ro:");
    scanf("%f", &number1);
    
	printf("\n Digite o n�mero:");
    scanf("%f", &number2);
    
	printf("\n Digite a op��o (1- Adi��o  2- Subtra��o  3- Multiplica��o  4- Divis�o):");
	scanf("%i", &option);
   
   
    
    if(option == 1 ){
      result = number1 + number2;
    printf("\n O resultado da adi��o �: %.f", result);
	}
	
	else if (option == 2){
	result = number1- number2;
	printf("\n O resultado da subtra��o �: %.f", result);
		}
	
	else if (option == 3) {
		result= number1 * number2;
		printf("\n O resultado da multiplica��o �: %.f", result);
		}
	
	else if (option == 4){
		result = number1 / number2;
		printf("\n O  resultado da divis�o �: %.1f", result);
		}
		
		else{
			printf("\n OP��O INV�LIDA!");
		}
		
		
					
		return 0;	
   
}
	
