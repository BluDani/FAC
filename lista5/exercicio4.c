#include<stdio.h>

/*
QUESTÃO 04:
Implementar um programa que exiba os N
primeiros termos de uma PA (Progressão
Aritmética) com primeiro termo a1 e razão
r.
*/

int main(){
	int n, r, a1, i, termo;
	
	printf("Quantidade: ");
	scanf("%d", &n);
	
	printf("Primeiro termo: ");
	scanf("%d", &a1);
	
	printf("Razao: ");
	scanf("%d", &r);
	
	termo = a1;
	i = 1;
	
	while(i <+ n){
		
		printf("%d, ", termo);
		termo += r;
		
		i++;
	}
}
