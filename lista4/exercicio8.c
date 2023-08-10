#include<stdio.h>

/*
QUEST�O 08: Em uma empresa deseja-se
fazer um levantamento sobre algumas
informa��es dos seus 250 funcion�rios. Cada
funcion�rio dever� responder um
question�rio ao qual informar� os seguintes
dados: matr�cula, g�nero, idade, sal�rio e
tempo (em anos) de trabalho na empresa. A
execu��o do programa deve exibir os
seguintes itens:

a) Quantidade de funcion�rios que
ingressaram na empresa com menos
de 21 anos;
b) Quantidade de funcion�rios do
g�nero feminino;
c) M�dia salarial dos homens;
d) Matr�cula dos funcion�rios mais
antigo e mais novo.
*/

int main(){
	//(QTDF) quantidade de funcion�rios
	int QTDF = 250, matricula, matriculaAntigo, matriculaNovo, idade, tempoTrabalho, i;
	
	//(somaSalario) � a soma dos salarios dos homens
	//(mediaHomem) media dos salarial dos hoemens
	int menos21 = 0, contMulheres = 0, contHomens = 0, maiorTempo = 0, menorTempo = 100;
	
	float salario, somaSalario, mediaHomem;
	char genero;
	
	printf("Formulario a ser preenchido\n\n");
	printf("matricula\n");
	printf("genero : F(feminino), M(masculino)\n");
	printf("idade\n");
	printf("salario\n");
	printf("Tempo (em anos) de trabalho na empresa\n");
	
	for(i = 1; i <=2; i++){
		
		printf("\nSua matricula:");
		scanf("%d", &matricula);
		fflush(stdin);
		
		printf("Seu genero:");
		scanf("%c", &genero);
		fflush(stdin);
		genero = toupper(genero);
		
		printf("Sua idade:");
		scanf("%d", &idade);
		
		printf("Seu salario:");
		scanf("%f", &salario);
		
		printf("Seu tempo de trabalho na empresa:");
		scanf("%d", &tempoTrabalho);
		fflush(stdin);
		
		//descobrindo se o funcionario entrou na empresa com menos de 21 anos
		if(idade - tempoTrabalho < 21){
			menos21++;
		}
		
		//descobrindo a quantidade de funcionarias femininas		
		if(genero == 'F'){
			contMulheres++;
		}
		else{
			somaSalario = somaSalario + salario;
			contHomens++;
		}
		
		if(tempoTrabalho > maiorTempo){
			maiorTempo = tempoTrabalho;
			matriculaAntigo = matricula;
		}
		if(tempoTrabalho < menorTempo){
			menorTempo = tempoTrabalho;
			matriculaNovo = matricula;
		}
	}
	
	mediaHomem = somaSalario / contHomens;
	
	printf("\nA quantidade de funcionarios que ingressaram na empresa com menos de 21 anos sao %d\n", menos21);
	printf("A quantidade de funcionarios do genero feminino sao %d\n", contMulheres);
	printf("A media salarial dos homens e %.2f", mediaHomem);
	printf("\nMatricula do funcionario mais antigo: %d", matriculaAntigo);
	printf("\nMatricula do funcionario mais novo: %d", matriculaNovo);
}
