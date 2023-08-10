#include<stdio.h>

int main(){
	int positivo, negativo;
	
	for(positivo = 1, negativo = -2; positivo<50 ; positivo+=2, negativo -=2){
		printf("%d, %d ,", positivo, negativo);
	}
}
