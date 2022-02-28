/*
Tarefa 7-  Exercicio 3- Calcular o IMC (Índice de Massa Corporal) de uma pessoa através da fórmula IMC = Peso (kg) / (Altura * Altura) (m)
Informe a classificação do IMC na tela de acordo com as regras abaixo:

< 18,5 Abaixo do peso 
De 18,5 a menor que 25,0 Saudável 
De 25,0 a menor que 30,0 Sobrepeso
De 30,0 a menor que 35,0 Obesidade Grau I 
De 35,0 a menor que 40,0 Obesidade Grau II (severa) 
De 40,0 em diante Obesidade Grau III (mórbida)

	Author: Itallo Rodrigues Moreno
*/

#include <stdio.h>  
#include <locale.h> 


int main() 
{
		setlocale(LC_ALL, "Portuguese");
	
	
    float peso, altura, imc;

    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);
    
	printf("Digite sua Altura (em metros):");
    scanf("%f", &altura);

    imc =  peso/ (altura * altura);

    if(imc < 18.5)
        printf("IMC: %.2f Abaixo do peso \n", imc);
    
	else if(imc >= 18.5 && imc < 25)
        printf("IMC: %.2f Peso normal \n", imc);
   
    else if(imc >= 25 && imc < 30)
        printf("IMC: %.2f Sobrepeso\n", imc);
    
	else if(imc >= 30 && imc < 35)
        printf("IMC: %.2f Obesidade grau 1 \n", imc);
    
	else if(imc >= 35 && imc < 40)
        printf("IMC: %.2f Obesidade grau 2 (severa) \n", imc);
   
    else
        printf("IMC: %.2f Obesidade grau 3 (mórbida) \n", imc);
        
        
	return 0;
}

