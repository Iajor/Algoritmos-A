#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	/*2. Faça um programa para leitura de dois números e após 
	faça as quatro operações matemáticas (Soma, Subtração,
	Multiplicação e divisão)
	e ainda teste as funções matemáticas como: raiz quadrada, potência, logaritmo entre outras.*/
	
	float numero1, numero2, soma, subtracao, multiplicacao, divisao, raizq1, raizq2, raizc1, raizc2, potencia1, potencia2, loga1, loga2, expo1, expo2;
	
	printf("Informe o primeiro número:\n");
	scanf("%f",&numero1);
	printf("Informe o segundo número:\n");
	scanf("%f",&numero2);
	soma=numero1+numero2;
	subtracao=numero1-numero2;
	multiplicacao=numero1*numero2;
	divisao=numero1/numero2;
	raizq1=sqrt(numero1);
	raizq2=sqrt(numero2);
	raizc1=cbrt(numero1);
	raizc2=cbrt(numero2);
	potencia1=pow(numero1,numero2);
	potencia2=pow(numero2,numero1);
	loga1=log10(numero1);
	loga2=log10(numero2);
	expo1=exp(numero1);
	expo2=exp(numero2);
	
	printf("A soma dos números informados é igual a %f.\n", soma);
	printf("A subtração dos números informados é igual a %f.\n", subtracao);
	printf("A multiplicação dos números informados é igual a %f.\n", multiplicacao);
	printf("A divisão dos números informados é igual a %f.\n", divisao);
	printf("A raiz quadrada do primeiro número informado é igual a %.2f.\n", raizq1);
	printf("A raiz quadrada do segundo número informado é igual a %.2f.\n", raizq2);
	printf("A raiz cúbica do primeiro número informado é igual a %.2f.\n", raizc1);
	printf("A raiz cúbica do segundo número informado é igual a %.2f.\n", raizc2);
	printf("O %f elevado a %f é igual a %.2f.\n", numero1, numero2, potencia1);
	printf("O %f elevado a %f é igual a %.2f.\n", numero2, numero1, potencia2);
	printf("O logaritmo na base 10 do primeiro número é igual a %.2f.\n", loga1);
	printf("O logaritmo na base 10 do segundo número é igual a %.2f.\n", loga2);
	printf("O exponencial do primeiro número é igual a %.2f.\n", expo1);
	printf("O exponencial do segundo número é igual a %.2f.\n", expo2);
	
	
	
}
