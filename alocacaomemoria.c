#include <stdio.h>
#include <stdlib.h>

void main(){
	int *p;
	int i,x, n;

	printf("\nDigite a quantidade de numeros que serao digitados ->");
	scanf("%d", &i);

	/* A fun��o malloc reserva espa�o suiciente para um vetor de inteiros.
	Caso sejam digitados 5 elementos, ser�o reservados 20 bytes, pois cada
	inteiro ocupa 4 bytes na mem�ria */


	p = (int *)(malloc( i *sizeof(int)));
	
	if(p == NULL){
		printf("\nErro de alocacao de memoria");
		exit(1);
	}

	for(x=0;x<i;x++){
		printf("Digite o numero para o indice/posicao %d ->", x);
		scanf("%d", &p[x]);
	}
	
}
