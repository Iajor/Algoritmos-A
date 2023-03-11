#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	/*7. Escreva um algoritmo para ler o n�mero de eleitores de um munic�pio, o n�mero de votos brancos, nulos e v�lidos. 
	Calcule e escreva o percentual que cada um representa em rela��o ao total de eleitores.*/
	
	float n_eleitores, n_brancos, n_nulos, n_validos, percentual_brancos, percentual_nulos, percentual_validos;
	 
	
	printf("Informe o n�mero de eleitores do munic�pio:\n");
	scanf("%i", &n_eleitores);
	printf("Informe o n�mero de votos brancos:\n");
	scanf("%i", &n_brancos);
	printf("Informe o n�mero de votos nulos:\n");
	scanf("%i", &n_nulos);
	printf("Informe o n�mero de votos v�lidos:\n");
	scanf("%i", &n_validos);
	
	percentual_brancos=(n_brancos*100)/n_eleitores;
	percentual_nulos=(n_nulos*100)/n_eleitores;
	percentual_validos=(n_validos*100)/n_eleitores;
	
	printf("Os votos brancos, nulos e v�lidos equivalem, respectivamente, a %.2f%% , %.2f%%  e %.2f%%  em rela��o ao n�mero de eleitores do munic�pio.", percentual_brancos, percentual_nulos, percentual_validos);
	
}

