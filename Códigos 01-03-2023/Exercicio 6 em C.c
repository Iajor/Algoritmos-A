#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
	//divisao apenas se nenhum dos números for zero
	float numero1, numero2, divisao1, divisao2;
        
    printf("Digite o primeiro número: \n");
    scanf("%f",&numero1);
    printf("Digite o segundo número: \n");
    scanf("%f",&numero2);
    
    if (numero1>0 && numero2>0){
	   	divisao1=numero1/numero2;
    	divisao2=numero2/numero1;
    	printf("Realizei duas divisões: o primeiro número dividido pelo segundo número resulta em %.2f, e o segundo número dividido pelo primeiro número, em %.2f!", divisao1, divisao2);
	}else{
		printf("A divisão não foi realizada, uma vez que um dos números é zero!");
}
}
