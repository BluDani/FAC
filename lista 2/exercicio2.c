#include<stdio.h>

/*
QUEST�O 02: Escrever um algoritmo que
obtenha o peso de uma pessoa na Terra e o
n�mero de um planeta. Ao final, com aux�lio da
tabela abaixo, calcular o peso desta pessoa no
planeta escolhido.

N�mero 			Planeta 		Gravidade Relativa g
1 				Merc�rio 				0,37
2 				V�nus 					0,88
3				Marte 					0,38
4 				J�piter 				2,64
5 				Saturno 				1,15
6 				Urano 					1,17

Para calcular o peso no planeta escolhido,
utilize a seguinte f�rmula:

pesoPlaneta = (pesoTerra/10) * gravidadePlaneta
*/

int main(){
	float peso, planeta;
	//gravidade do planeta
	float g;
	//pesop = peso do planeta
	float pesop;
	
	
	printf("seu peso:");
	scanf("%f", &peso);
	printf("planeta escolhido:");
	scanf("%f", &planeta);
	
	if(planeta == 1){
		 g = 0.37;
	}
	else{
		if(planeta == 2)
		{
			g = 0.88;
		}
		else{
			if(planeta == 3){
				g = 0.38;
			}
			else{
				if(planeta == 4){
					g = 2.64;
				}
				else{
					if(planeta == 5){
						g = 1.15;
					}
					else{
						g = 1.17;
					}
				}
			}
		}
	}
	
	//calculando peso da pessoa no planeta escolhido
	pesop = (peso/10) * g;
	
	printf("seu peso na terra e %.2f \nseu peso no planeta escolhido e %.2f", peso, pesop);
	
}
