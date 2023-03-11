#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "Portuguese");
	//area circulo
	float raio, pi=3.14, area;
	printf("Digite o raio do círculo: \n");
	scanf("%f",&raio);
	area=pi*(raio*raio);
	printf("A área do círculo é %.2f",area);
	
getch();
}
