/*
Atividade 3

Implementar uma função que, dados 3
valores reais (n1, n2, n3), compare-os e
altere seus conteúdos, de forma que n1
armazene o maior elemento, n2 o segundo
maior e n3 o menor deles.
*/

#include<stdio.h>

//protótipo da função
void alterandoConteudo(float num1, float num2, float num3, float *maior, float *meio, float *menor);

void main(){
	
	float valor1, valor2, valor3;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &valor1);
	
	printf("Digite o segundo valor: ");
	scanf("%f", &valor2);
	
	printf("Digite o terceiro valor: ");
	scanf("%f", &valor3);
	
	alterandoConteudo(valor1, valor2, valor3, &valor1, &valor2, &valor3);
	
	printf("\nn1 = %.2f\nn2 = %.2f\nn3 = %.2f", valor1, valor2, valor3);
}

void alterandoConteudo(float num1, float num2, float num3, float *maior, float *meio, float *menor){
	
	//verificando se o Primeiro valor é maior
	if((num1 > num2) && (num1 > num3)){
		
		(*maior) = num1;
		
		if(num2 > num3){
			
			(*meio) = num2;
			(*menor) = num3;
		}
		else{
			
			(*meio) = num3;
			(*menor) = num2;
		}
		
	}
	
	//Verificando se o Segundo valor é maior
	else{
		if(num2 > num3){
			
			(*maior) = num2;
			
			if(num1 > num3){
				
				(*meio) = num1;
				(*menor) = num3;
			}
			else{
				
				(*meio) = num3;
				(*menor) = num1;
			}
		}
		
		//Verificando se o Terceiro valor é maior
		else{
			if(num3 > num2){
				(*maior) = num3;
				
				if(num1 > num2){
					(*meio) = num1;
					(*menor) = num2;
					
				}
				else{
					(*meio) = num2;
					(*menor) = num1;
				}
			}
		}
		
	}	
}
