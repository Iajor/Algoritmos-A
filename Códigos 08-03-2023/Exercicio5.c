#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	/*5. Um carro percorreu determinada dist�ncia em determinado tempo. 
	Desenvolva o algoritmo para ler estes dados e calcular a velocidade m�dia do carro. 
	Sabe-se que a velocidade m�dia � a raz�o entre a dist�ncia percorrida e o tempo para percorr�-la. */
	
	float distancia, tempo, velmedia;
	
	printf("Informe a dist�ncia percorrida em KM: \n");
	scanf("%f", &distancia);
	printf("Informe o tempo em horas:\n");
	scanf("%f", &tempo);
	
	velmedia=distancia/tempo;
	printf("A velocidade m�dia do carro no percurso realizado foi de %.f km/h.", velmedia);
		

}
