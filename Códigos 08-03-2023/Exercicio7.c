#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	/*7. Escreva um algoritmo para ler o número de eleitores de um município, o número de votos brancos, nulos e válidos. 
	Calcule e escreva o percentual que cada um representa em relação ao total de eleitores.*/
	
	float n_eleitores, n_brancos, n_nulos, n_validos, percentual_brancos, percentual_nulos, percentual_validos;
	 
	
	printf("Informe o número de eleitores do município:\n");
	scanf("%i", &n_eleitores);
	printf("Informe o número de votos brancos:\n");
	scanf("%i", &n_brancos);
	printf("Informe o número de votos nulos:\n");
	scanf("%i", &n_nulos);
	printf("Informe o número de votos válidos:\n");
	scanf("%i", &n_validos);
	
	percentual_brancos=(n_brancos*100)/n_eleitores;
	percentual_nulos=(n_nulos*100)/n_eleitores;
	percentual_validos=(n_validos*100)/n_eleitores;
	
	printf("Os votos brancos, nulos e válidos equivalem, respectivamente, a %.2f%% , %.2f%%  e %.2f%%  em relação ao número de eleitores do município.", percentual_brancos, percentual_nulos, percentual_validos);
	
}

