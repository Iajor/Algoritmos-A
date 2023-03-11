#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	/*4. Converta a temperatura dada em Celsius para Fahrenheit. 
	Utilize a seguinte equação: C/5 = (F-32)/9*/
	
	float celsius, fahrenheit;
	
	printf("Informe a temperatura em celsius:\n");
	scanf("%f", &celsius);
	fahrenheit=((celsius*9)/5)+32;
	
	printf("A temperatura em celsius convertida para fahrenheit é igual a %.fº.\n", fahrenheit);
	
}
