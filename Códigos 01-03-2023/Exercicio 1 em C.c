#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	//area retangulo
	float base, altura, area;
	printf("Digite o valor da base: \n");
	scanf("%f",&base);
	printf("Digite o valor da altura: \n");
	scanf("%f", &altura);
	area=base*altura;
	printf("A área do retângulo é %.2f", area);
	
	
	getch();
}
