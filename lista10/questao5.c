/*
QUESTÃO 05:
Fazer uma função que exiba a tabuada de
potências de um número n, no intervalo de 1 a
9. Se o número não estiver neste intervalo, o
código 0 deve ser retornado; caso contrário,
retorna-se 1.

Para ilustrar, abaixo é apresentada como a
tabuada de potências de 2 deveria ser exibida:

2^0 = 1
2^1 = 2
2^2 = 4
2^3 = 8
2^4 = 16
2^5 = 32
2^6 = 64
2^7 = 128
2^8 = 256
2^9 = 512
*/

#include<stdio.h>

//protótipo da função
void exibirTabuadaPotencia(int p);

void main(){
	int potencia;
	
	printf("digite um numero: ");
	scanf("%d", &potencia);
	
	exibirTabuadaPotencia(potencia);
}

void exibirTabuadaPotencia(int p){
	int i, resultado = 1;
	
	if((p >= 0) && (p <=9)){
		
		i = 0;
	
	do{
		printf("\n%d^%d = %d", p, i, resultado);
		resultado *= p;
		
		
		i++;
	}
	while(i <= 9);
	
		return 1;
	}
	else{
	
		return 0;
	}
}
