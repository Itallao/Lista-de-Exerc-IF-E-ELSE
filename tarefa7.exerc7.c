/*
  Tarefa 7  -  Exercicio 7. Um triângulo pode ser classificado de acordo com as medidas de seus lados: 

- Um triângulo equilátero possui todos os lados de mesma medida. 
- Um triângulo isósceles possui dois lados de mesma medida. 
- Um triângulo escaleno possui as medidas dos três lados diferentes. 

Receber os três lados de um triângulo em qualquer ordem (chame de lado1, lado2 e lado3) e classificá-lo em equilátero, isósceles ou escaleno.
		
	Author: Itallo Rodrigues Moreno
 
*/




#include <stdio.h>  
#include <locale.h> 

int main ()
{
		setlocale(LC_ALL, "Portuguese");
    
  
   float lado1, lado2, lado3;
    
    printf("Digite O lado1:");
    scanf("%f", &lado1);
    
	printf("\n Digite o lado2:");
    scanf("%f", &lado2);
    
	printf("\n Digite o lado3:");
    scanf("%f", &lado3);


	if(lado1==lado2 && lado2==lado3 && lado3==lado1){
	printf("\n Este triângulo é equilátero!");
	}	
	
	else if (lado1==lado2 || lado2==lado3 || lado1==lado3){
	printf("\n Este triângulo é isósceles!");	
	}
	
	else{
		printf("\n Este triângulo é escaleno!!");
	}
	
   
    
    
    
	   return 0;	
   
}
	
