#include<stdio.h>

/*
QUEST�O 04:
Um banco conceder� um cr�dito especial aos
seus clientes, vari�vel com o saldo m�dio no
�ltimo ano. Fa�a um algoritmo que calcule o
valor do cr�dito de acordo com a tabela abaixo.

Saldo M�dio 				Percentual
Inferior a R$ 1000,00 		nenhum cr�dito
De R$ 1000,00 a
R$ 1499,99 					20% do saldo m�dio
De R$ 1500,00 a
R$ 2499,99 					30% do saldo m�dio
R$ 2500,00 ou mais 			40% do saldo m�dio
*/

int main(){
	//saldo medio(sm)
	float sm, credito;
	
	printf("seu saldo medio no ultimo ano:");
	scanf("%f", &sm);
	
	if(sm <1000.00){
		printf("seu saldo e %.2f", sm);
	}
	else{
		if(sm < 1500.00){
			credito = (sm*20)/100;
			printf("seu saldo e %.2f com %.2f de credito", sm, credito);
		}
		else{
			if(sm < 2500.00){
				credito = (sm*30)/100;
				printf("seu saldo e %.2f com %.2f de credito", sm, credito);
			}
			else{
				credito = (sm*40)/100;
				printf("seu saldo e %.2f com %.2f de credito", sm, credito);
			}
		}
	}
}
