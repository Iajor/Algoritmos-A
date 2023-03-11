#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	/* 3. Escreva um algoritmo para ler o salário mensal e o percentual de reajuste. 
	O algoritmo deve calcular o novo  salário e exibi-lo.*/
	float salario, reajuste, novo_salario;
	
	printf("Informe o valor do sálario:\n");
	scanf("%f", &salario);
	printf("Informe o percentual de reajuste: \n");
	scanf("%f", &reajuste);
	
	novo_salario=salario*((reajuste/100)+1);
	printf("O novo salário será reajustado para o valor de R$%.2f.", novo_salario);	
	
}
