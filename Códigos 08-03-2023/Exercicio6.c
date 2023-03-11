#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	/*6. Calcule a média final de um aluno,
	 considerando que existem duas avaliações no semestre.*/
	 
	 float nota1, nota2, media_final;
	 
	 printf("Informe a nota da primeira avaliação:\n");
	 scanf("%f",&nota1);
	 printf("Informe a nota da segunda avaliação:\n");
	 scanf("%f",&nota2);
	 
	 media_final=(nota1+nota2)/2;
	 printf("A média final do aluno é %.2f.", media_final);
	 
}
	
