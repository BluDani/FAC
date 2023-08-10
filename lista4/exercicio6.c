#include<stdio.h>

int main(){
	//(inteiro) nuemro inteiro
	//(n1) primeiro valor
	//(n2) segundo valor
	//(soma) soma dos valores de n1 e n2
	//(resultado) resultado da soma 
	int inteiro, n1, n2, soma, resultado, i;
	
	printf("digite um numero inteiro menor ou igual a 18: ");
	scanf("%d", &inteiro);
	
	if(inteiro > 18){
		printf("[ERRO] numero invalido, tente novamente");
	}
	else{
		printf("\nos numeros cujo o algaritmo somam %d sao ", inteiro);
		
		//Variando todos os valores entre 1 a 99
		for(i = 1; i <= 99; i++){
			n1 = i / 10;
			n2 = i % 10;
			
			soma = n1 + n2;
			
			if(soma == inteiro){
				resultado = soma;
				printf("%d%d, ",n1, n2);
	    	}
		    else{
				resultado = 0;
		    }
		}
	}
}
