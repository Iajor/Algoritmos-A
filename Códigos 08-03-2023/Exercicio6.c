#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	/*6. Calcule a m�dia final de um aluno,
	 considerando que existem duas avalia��es no semestre.*/
	 
	 float nota1, nota2, media_final;
	 
	 printf("Informe a nota da primeira avalia��o:\n");
	 scanf("%f",&nota1);
	 printf("Informe a nota da segunda avalia��o:\n");
	 scanf("%f",&nota2);
	 
	 media_final=(nota1+nota2)/2;
	 printf("A m�dia final do aluno � %.2f.", media_final);
	 
}
	
