#include <stdio.h>

float aluno[5][3];


int imprimirmedia(){
	// aqui voc� vai exibir e calcular a m�dia...
	return 0;
}

int imprimirmediaturma(){
	// aqui exibir e calcular a m�dia da turma..
	return 0;
	
}

void exibirmenu(){
	
	int opcao;
	
	opcao = 0;
	
	printf("1 - Imprimir m�dia do aluno \n");
	printf("2 - Imprimir m�dia da turma");
	printf("Informe a sua op��o");
	scanf("%d", &opcao);
	
	if(opcao == 1){
		imprimirmedia();
	}
	
	if(opcao == 2){
		imprimirmediaturma();
	}
	
}

void main(){
		
	int l;
	float soma;
	float media;
	
	for(l=0;l<=4;l++){
		printf("Informe o RA ");
		scanf("%f", &aluno[l][0]);
		
		printf("Informe nota 1 Bimestre ");
		scanf("%f", &aluno[l][1]);
		
		printf("Informe nota 2 Bimestre ");
		scanf("%f", &aluno[l][2]);	
		
		// coisa do dirceu nao altere nada 
		//soma  = aluno[l][1]	+ aluno[l][2];
		//media = (aluno[l][1]	+ aluno[l][2])/2;
	}
	
	
	exibirmenu();
	
	
	
	
}
