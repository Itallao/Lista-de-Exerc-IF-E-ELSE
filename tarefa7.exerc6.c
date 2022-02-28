/*
  Tarefa 7 -  Exercicio 6- Implementar uma calculadora onde o usuário digita dois números e uma opção, que deve ser 1 para adição, 2 para subtração, 
  3 para multiplicação e 4 para divisão. Mostrar na tela caso seja informada uma opção inválida.
   
	Author: Itallo Rodrigues Moreno

 
*/




#include <stdio.h>  
#include <locale.h> 

int main ()
{
		setlocale(LC_ALL, "Portuguese");
    
   
   float number1, number2, result; 
   int option;
  
    
	printf(" Digite o numéro:");
    scanf("%f", &number1);
    
	printf("\n Digite o número:");
    scanf("%f", &number2);
    
	printf("\n Digite a opção (1- Adição  2- Subtração  3- Multiplicação  4- Divisão):");
	scanf("%i", &option);
   
   
    
    if(option == 1 ){
      result = number1 + number2;
    printf("\n O resultado da adição é: %.f", result);
	}
	
	else if (option == 2){
	result = number1- number2;
	printf("\n O resultado da subtração é: %.f", result);
		}
	
	else if (option == 3) {
		result= number1 * number2;
		printf("\n O resultado da multiplicação é: %.f", result);
		}
	
	else if (option == 4){
		result = number1 / number2;
		printf("\n O  resultado da divisão é: %.1f", result);
		}
		
		else{
			printf("\n OPÇÃO INVÁLIDA!");
		}
		
		
					
		return 0;	
   
}
	
