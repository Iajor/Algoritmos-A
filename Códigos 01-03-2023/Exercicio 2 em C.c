#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "Portuguese");
	// area triangulo equilatero
	float lado, area;
	printf("Digite o lado do triângulo equilátero: \n");
	scanf("%f",&lado);
	area=((lado*lado)*(sqrt(3))/4);
	printf("A área do triângulo é %.2f", area);
	

getch();
}

