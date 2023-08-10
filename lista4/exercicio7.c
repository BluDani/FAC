#include<stdio.h>

int main(){
	//(maisAceitacao) grupo onde o produto teve mais aceitacao
	char genero, avaliacao, maisAceitacao;
	//(publicoF) publico feminino
	//(publicoM) publico masculino
	int i, entrevistados, contGostou = 0, contNaoGostou = 0, publicoF = 0, publicoM = 0;
	
	printf("genero\t\t\tavalicao\n");
	printf("F(feminino)\t\tG(gostou)\n");
	printf("M(masculino)\t\tN(nao gostou)\n");
	
	printf("\nNumero de pessoas que foram entrevistadas: ");
	scanf("%d", &entrevistados);
	fflush(stdin);
	
	for(i=1; i<= entrevistados; i++){
		printf("\nseu genero: ");
		scanf("%c", &genero);
		fflush(stdin);
		
		printf("Sua avaliacao: ");
		scanf("%c", &avaliacao);
		fflush(stdin);
		
		genero = toupper(genero);
		avaliacao = toupper(avaliacao);
		
		if(genero == 'F' && avaliacao == 'G'){
			contGostou++;
			publicoF++;
		}
		else{
			if(genero == 'M' && avaliacao == 'G'){
				contGostou++;
				publicoM++;
			}
			else{
				if(genero == 'F' && avaliacao == 'N'){
					contNaoGostou++;
				}
				else{
					contNaoGostou++;
				}
			}
		}
	}
	
	if(publicoF > publicoM){
		maisAceitacao = 'F';
	}
	else{
		maisAceitacao = 'M';
	}
	
	printf("\nNumero de pessoas que gostaram do produto: %d\n", contGostou);
	printf("numero de pessoas que nao gostaram do produto: %d\n", contNaoGostou);
	printf("O produto teve mais aceitacao no grupo %c", maisAceitacao);
}
