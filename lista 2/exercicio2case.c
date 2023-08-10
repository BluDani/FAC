#include<stdio.h>

int main(){
	//gravidade do planeta
	//pesop = peso do planeta
	float peso, g, pesop;
	int planeta;
	
	
	printf("seu peso:");
	scanf("%f", &peso);
	printf("planeta escolhido:");
	scanf("%d", &planeta);
	
	switch (planeta){
		case 1: g = 0.37;
		break;
		
		case 2: g = 0.88;
		break;
		
		case 3: g = 0.38;
		break;
		
		case 4: g = 2.64;
		break;
		
		case 5:	g = 1.15;
		break;
		
		case 6: g = 1.17;			
	}
	
	//calculando peso da pessoa no planeta escolhido
	pesop = (peso/10) * g;
	
	printf("seu peso na terra e %.2f \nseu peso no planeta escolhido e %.2f", peso, pesop);
}
