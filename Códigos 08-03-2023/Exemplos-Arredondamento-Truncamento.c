#include <stdio.h>
#include <math.h>
#include <locale.h>

main(void){
	setlocale(LC_ALL, "portuguese");

	float valor, valor2, valor_ceil, valor_floor, valor2_ceil, valor2_floor, valor_round, valor2_round;
	printf("Exemplos de arredondamento e truncamento de n�meros:\n");
	printf("Digite um valor n�o inteiro: \n");
	scanf("%f",&valor);
	printf("Digite outro valor n�o inteiro diferente: \n");
	scanf("%f",&valor2);
	valor_ceil=ceil(valor);
	valor2_ceil=ceil(valor2);
	valor_floor=floor(valor);
	valor2_floor=floor(valor2);	
	valor_round=round(valor);
	valor2_round=round(valor2);
	printf("Os valores digitados foram arredondados utilizando, respectivamente, as fun��es ceil, floor e round.\nO primeiro valor foi arredondado para %.f, %.f e %.f,\nenquanto o segundo valor para %.f, %.f, e %.f.", valor_ceil, valor_floor, valor_round, valor2_ceil, valor2_floor, valor2_round);
	
	
	
	
	
}
