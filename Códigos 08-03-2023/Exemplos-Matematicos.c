#include <stdio.h>
#include <math.h>
#include <locale.h>

main(void){
	setlocale(LC_ALL, "portuguese");
	
	float seno, cosseno, tangente, potencia, raizq, raizc, rq, rc, n, p, loga, l, expo, e;
	seno=sin(1.0472);
	cosseno=cos(1.0472);
	tangente=tan(1.0472);
	printf("Exemplos de funções matemáticas:\n");
	printf("O valor do seno de 1 radiano é igual a %.2f\n",seno);
	printf("O valor do cosseno de 1 radiano é igual a %.2f\n",cosseno);
	printf("O valor do tangente de 1 radiano é igual a %.2f\n",tangente);	
	
	printf("\n\nPotência:\n");
	printf("Digite um número para ser elevado na potência:\n");
	scanf("%f", &n);
	printf("Digite a potência:\n");
	scanf("%f", &p);
	potencia=pow(n,p);
	printf("O valor de %.f elevado na potencia %.f é igual a %.f\n",n, p, potencia);
	
	printf("\n\nRaiz Quadrada: \n");
	printf("Digite um valor a ser calculado sua raiz quadrada: \n");
	scanf("%f",&rq);
	raizq=sqrt(rq);
	printf("O valor da raiz quadrada de %.f é igual a %f\n",rq, raizq);
	
	printf("\n\nRaiz Cúbica: \n");
	printf("Digite um valor a ser calculado sua raiz cúbica: \n");
	scanf("%f",&rc);
	raizc=cbrt(rc);
	printf("O valor da raiz cúbica de %.f é igual a %f\n",rc, raizc);
	
	printf("\n\nLogaritmo: \n");
	printf("Digite um valor a ser calculado seu logaritmo em base 10: \n");
	scanf("%f",&l);
	loga=log10(l);
	printf("O valor do logaritmo em base 10 de %.f é igual a %f\n",l, loga);
	
	printf("\n\nExponencial: \n");
	printf("Digite um valor a ser calculado seu exponencial: \n");
	scanf("%f",&e);
	expo=exp(e);
	printf("O valor do exponencial de %.f é igual a %f\n",e, expo);
	
	
	
	
	
	
	
	
	
}
