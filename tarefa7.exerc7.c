/*
  Tarefa 7  -  Exercicio 7. Um tri�ngulo pode ser classificado de acordo com as medidas de seus lados: 

- Um tri�ngulo equil�tero possui todos os lados de mesma medida. 
- Um tri�ngulo is�sceles possui dois lados de mesma medida. 
- Um tri�ngulo escaleno possui as medidas dos tr�s lados diferentes. 

Receber os tr�s lados de um tri�ngulo em qualquer ordem (chame de lado1, lado2 e lado3) e classific�-lo em equil�tero, is�sceles ou escaleno.
		
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
	printf("\n Este tri�ngulo � equil�tero!");
	}	
	
	else if (lado1==lado2 || lado2==lado3 || lado1==lado3){
	printf("\n Este tri�ngulo � is�sceles!");	
	}
	
	else{
		printf("\n Este tri�ngulo � escaleno!!");
	}
	
   
    
    
    
	   return 0;	
   
}
	
