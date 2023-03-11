#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	/*5. Um carro percorreu determinada distância em determinado tempo. 
	Desenvolva o algoritmo para ler estes dados e calcular a velocidade média do carro. 
	Sabe-se que a velocidade média é a razão entre a distância percorrida e o tempo para percorrê-la. */
	
	float distancia, tempo, velmedia;
	
	printf("Informe a distância percorrida em KM: \n");
	scanf("%f", &distancia);
	printf("Informe o tempo em horas:\n");
	scanf("%f", &tempo);
	
	velmedia=distancia/tempo;
	printf("A velocidade média do carro no percurso realizado foi de %.f km/h.", velmedia);
		

}
