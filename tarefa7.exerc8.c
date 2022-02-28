/*
  Tarefa 7 -  Exercicio 8. Faça um programa para calcular o peso ideal de uma pessoa. Ao iniciar o programa, peça a idade da pessoa, pois o índice 
  não é preciso para crianças e pessoas idosas.
Assim, não calcule para pessoas maiores que 65 anos e menores que 12 anos. Através do sexo (1 para masculino, 2 para feminino) e da altura, calcular o 
peso ideal de uma pessoa. 
Receber também o peso atual dela e indicar se a mesma está no peso ideal (margem de erro de +- 5%), acima ou abaixo, conforme o cálculo: 

Fórmula do peso ideal do homem: (72.7 * altura) – 62 
Fórmula do peso ideal da mulher: (62.1 * altura) – 48.7

TESTE 1.
Entrada:
	Idade: 45
 	Sexo:1
 	Peso atual: 98
 	Altura: 1.80
 	
Calculo:
	Peso ideal: (72.7* 1.80)- 62 = 68.86
	Margem +- 5%: Máximo 72.30, Minimo: 65,41
Saída:
	Acima do peso ideal.
	
TESTE 2.
Entrada:
	Idade: 45
 	Sexo:1
 	Peso atual: 69
 	Altura: 1.80
 	
Calculo:
	Peso ideal: (72.7* 1.80)- 62 = 68.86
	Margem +- 5%: Máximo 72.30, Minimo: 65,41
Saída:
	Dentro do peso Atual.

TESTE 3.
Entrada:
	Idade: 45
 	Sexo:2
 	Peso atual: 40
 	Altura: 1.80
 	
Calculo:
	Peso ideal:  (62.1 * 1.80) – 48.7= 63,08
	Margem +- 5%: Máximo 66,23 , Minimo: 59,92 
	
Saída:
	Abaixo do peso ideal.

TESTE 4.
Entrada:
	Idade: 45
 	Sexo:2
 	Peso atual: 60
 	Altura: 1.80
 	
Calculo:
	Peso ideal:  (62.1 * 1.80) – 48.7= 63,08
	Margem +- 5%: Máximo 66,23 , Minimo: 59,92 
Saída:
	Dentro do peso ideal.
	
	Author: Itallo Rodrigues Moreno
 
	
*/




#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    
   float pesoAtual, altura, pesoIdeal, pesoIdealMin, pesoIdealMax;
   int	sexo, idade;
   
   printf("Digite sua idade (entre 12 e 65 anos): ");
   scanf("%i", &idade);
   
   if(idade >= 12 && idade <= 65 ){
   	printf("\n Dentro da faixa de calculo");
   	
	printf("\n Digite a sua altura: ");
   	scanf("%f", &altura);
   	
   	printf("\n Digite  o sexo (1-Masculino  2- Feminino)");
   	scanf("%i", &sexo);
   	
   	printf("\n Digite seu peso atual: ");
   	scanf("%f", &pesoAtual);
   	
   	if (sexo == 1){
   		pesoIdeal= (72.7 * altura) - 62;	
	   }
	 else{
	 	pesoIdeal = (62.1 * altura - 48.7);
	 } 
	
	pesoIdealMax = pesoIdeal * 1.05; 
   	pesoIdealMin = pesoIdeal * 0.95;
   	
   	printf("\n Peso ideal = %.2f", pesoIdeal);
   	printf("\n Peso ideal máximo = %.2f", pesoIdealMax);
   	printf("\n Peso ideal Mínimo= %.2f", pesoIdealMin);
   	
   	if(pesoAtual > pesoIdealMax){
   		printf("\n Você esta acima do seu peso ideal");
		}
	  
	  else{
	  	if(pesoAtual < pesoIdealMin) {
	  		printf("\n Você esta abaixo do peso ideal");	
		  }
		
		else {
			printf("\n Você está dentro do peso ideal!");
		}
	  }
	   
	  
	}
   	else{
   		printf("\n Erro!. Digite uma idade entre 12 e 65 anos");	
  		} 
    

    
   
	return 0;	
   
}
	
