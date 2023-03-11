#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	/*1. Desenvolva um algoritmo para ler as medidas de uma caixa,
	calcular e mostrar o seu volume.*/
	
	float comprimento, largura, altura, volume;
	
	printf("Informe o comprimento da caixa:\n");
	scanf("%f",&comprimento);
	printf("Informe a largura da caixa:\n");
	scanf("%f",&largura);
	printf("Informe a altura da caixa:\n");
	scanf("%f",&altura);
	
	volume=comprimento*altura*largura;
	printf("O volume da caixa com as medidas informadas é igual a %.2f.", volume);
	
	
	
	
	
}
