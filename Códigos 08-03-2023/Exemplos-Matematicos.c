#include <stdio.h>
#include <math.h>
#include <locale.h>

main(void){
	setlocale(LC_ALL, "portuguese");
	
	float seno, cosseno, tangente, potencia, raizq, raizc, rq, rc, n, p, loga, l, expo, e;
	seno=sin(1.0472);
	cosseno=cos(1.0472);
	tangente=tan(1.0472);
	printf("Exemplos de fun��es matem�ticas:\n");
	printf("O valor do seno de 1 radiano � igual a %.2f\n",seno);
	printf("O valor do cosseno de 1 radiano � igual a %.2f\n",cosseno);
	printf("O valor do tangente de 1 radiano � igual a %.2f\n",tangente);	
	
	printf("\n\nPot�ncia:\n");
	printf("Digite um n�mero para ser elevado na pot�ncia:\n");
	scanf("%f", &n);
	printf("Digite a pot�ncia:\n");
	scanf("%f", &p);
	potencia=pow(n,p);
	printf("O valor de %.f elevado na potencia %.f � igual a %.f\n",n, p, potencia);
	
	printf("\n\nRaiz Quadrada: \n");
	printf("Digite um valor a ser calculado sua raiz quadrada: \n");
	scanf("%f",&rq);
	raizq=sqrt(rq);
	printf("O valor da raiz quadrada de %.f � igual a %f\n",rq, raizq);
	
	printf("\n\nRaiz C�bica: \n");
	printf("Digite um valor a ser calculado sua raiz c�bica: \n");
	scanf("%f",&rc);
	raizc=cbrt(rc);
	printf("O valor da raiz c�bica de %.f � igual a %f\n",rc, raizc);
	
	printf("\n\nLogaritmo: \n");
	printf("Digite um valor a ser calculado seu logaritmo em base 10: \n");
	scanf("%f",&l);
	loga=log10(l);
	printf("O valor do logaritmo em base 10 de %.f � igual a %f\n",l, loga);
	
	printf("\n\nExponencial: \n");
	printf("Digite um valor a ser calculado seu exponencial: \n");
	scanf("%f",&e);
	expo=exp(e);
	printf("O valor do exponencial de %.f � igual a %f\n",e, expo);
	
	
	
	
	
	
	
	
	
}
