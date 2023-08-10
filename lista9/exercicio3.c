/*
QUESTÃO 03:
Desenvolver uma função que calcule o n-ésimo
termo da sequência de Fibonacci.

Fibonacci: 1 1 2 3 5 8 13 21

parametros: n termo
retorno: 
*/

#include<stdio.h>

int fibonacci (int n){
	int i, termo = 0, a = 1, b = 1;
	
	
	if((n == 1) || (n == 2)){
		
		return 1;
	}
	else{
		
		for(i = 3; i<=n; i++){
			//calculando o novo termo
			termo = a + b;
			
			//atualizando os dois anteriores
			a = b;
			b = termo;
			
		}
		
		return termo;
	}
}

void main(){
	
	int ordem, termo, resposta, i;
	
	printf("diigte o numero de sequencia: ");
	scanf("%d", &ordem);
	
	termo = fibonacci (ordem);
	
	printf("\n\n%d termo de fibonacci e %d", ordem, termo);
	
	//exemplo 2
	printf ("\n\n");
	
	for (i=1;i<=20;i++)
	{
		resposta = fibonacci (i);
		printf ("%d ", resposta);
	}
}
