#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	/*2. Fa�a um programa para leitura de dois n�meros e ap�s 
	fa�a as quatro opera��es matem�ticas (Soma, Subtra��o,
	Multiplica��o e divis�o)
	e ainda teste as fun��es matem�ticas como: raiz quadrada, pot�ncia, logaritmo entre outras.*/
	
	float numero1, numero2, soma, subtracao, multiplicacao, divisao, raizq1, raizq2, raizc1, raizc2, potencia1, potencia2, loga1, loga2, expo1, expo2;
	
	printf("Informe o primeiro n�mero:\n");
	scanf("%f",&numero1);
	printf("Informe o segundo n�mero:\n");
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
	
	printf("A soma dos n�meros informados � igual a %f.\n", soma);
	printf("A subtra��o dos n�meros informados � igual a %f.\n", subtracao);
	printf("A multiplica��o dos n�meros informados � igual a %f.\n", multiplicacao);
	printf("A divis�o dos n�meros informados � igual a %f.\n", divisao);
	printf("A raiz quadrada do primeiro n�mero informado � igual a %.2f.\n", raizq1);
	printf("A raiz quadrada do segundo n�mero informado � igual a %.2f.\n", raizq2);
	printf("A raiz c�bica do primeiro n�mero informado � igual a %.2f.\n", raizc1);
	printf("A raiz c�bica do segundo n�mero informado � igual a %.2f.\n", raizc2);
	printf("O %f elevado a %f � igual a %.2f.\n", numero1, numero2, potencia1);
	printf("O %f elevado a %f � igual a %.2f.\n", numero2, numero1, potencia2);
	printf("O logaritmo na base 10 do primeiro n�mero � igual a %.2f.\n", loga1);
	printf("O logaritmo na base 10 do segundo n�mero � igual a %.2f.\n", loga2);
	printf("O exponencial do primeiro n�mero � igual a %.2f.\n", expo1);
	printf("O exponencial do segundo n�mero � igual a %.2f.\n", expo2);
	
	
	
}
