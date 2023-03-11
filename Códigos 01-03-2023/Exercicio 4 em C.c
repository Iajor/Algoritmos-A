#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    //calculo da idade
    int idade, ano_atual, ano_nascimento;
    char fez_aniversario;
    
    printf("Digite a idade: \n");
    scanf("%i",&idade);
    printf("Digite o ano atual: \n");
    scanf("%i",&ano_atual);
          
    printf("Fez aniversário? Responde S para Sim e N para Não: \n");
    scanf(" %c",&fez_aniversario); //com o espaço na frente funciona 
    
    if (fez_aniversario == 'S' || fez_aniversario == 's'){
        ano_nascimento=ano_atual-idade;
        printf("O ano de nascimento é %i", ano_nascimento);
    }else if(fez_aniversario == 'N' || fez_aniversario == 'n'){
        ano_nascimento=(ano_atual-1)-idade;
        printf("O ano de nascimento é %i", ano_nascimento);
    }
    
}

