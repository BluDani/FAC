#include<stdio.h>

int main(){
	int i, soma, subtracao;
	int resultado = 0;
	
	//(&& subtracao >=1) pode ser removido
	for(soma = 1, subtracao = 50 ; soma <=51 && subtracao >=1; soma++, subtracao--){
		printf("%d,%d,", soma, subtracao);
		resultado = resultado + soma + subtracao;
	}
	
	printf("\n\nsoma dos elementos: %d", resultado);
}
