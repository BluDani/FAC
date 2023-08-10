#include<stdio.h>

int main(){
	int j, i, resultado;
	
	for(i = 1; i <= 9; i ++){
		for(j = 0; j <= 9; j++){
			resultado = i * j;
			
			printf("%d x %d = %d\n", i, j, resultado);
		}
		
		printf("\n\n");
	}
}
