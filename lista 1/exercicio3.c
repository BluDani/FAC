#include<stdio.h>

/*
QUESTÃO 03:
Construir um algoritmo que calcule o peso ideal
de uma pessoa, de acordo com o seu gênero e
altura, utilizando as seguintes fórmulas:

 para homens: (72.7*h)-58
 para mulheres: (62.1*h)-44.7
*/

int main(){
	float altura, peso;
	//genero (g)
	int g;
	
	printf("digite 1 para masculino\n");
	printf("digite 2 para feminino\n");
	
	printf("seu genero:");
	scanf("%d", &g);
	printf("sua altura:");
	scanf("%f", &altura);
	
	
	if(g == 1){
		//calculando o peso
		peso = (72.7*altura)-58;
		printf("seu peso ideal e %.2f", peso);
	}
	else{
		peso = (62.1*altura)-44.7;
		printf("seu peso ideal e %.2f", peso);
	}
}
