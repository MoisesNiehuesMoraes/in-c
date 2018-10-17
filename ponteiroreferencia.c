#include <stdio.h>

void soma (int piValorA, int piValorB, int * piResultado){
	printf("Endereco de piResultado = %d\n", piResultado);
	/* o valor est� sendo colocado diretamente na mem�ria */
	*piResultado = piValorA + piValorB;
	return;
}


void main (){
	int iValorA;
	int iValorB;
	int iResultado;
	
	
	printf ("Entre com os valores:");
	scanf ("%d %d", &iValorA, &iValorB);
	
	
	printf("Endereco de iResultado = %d\n", &iResultado);
	
	/* est� sendo passado o endere�o de mem�ria
	da vari�vel, qualquer altera��o estar�
	sendo realizada na mem�ria */
	
	
	soma (iValorA, iValorB, &iResultado);
	
	printf ("Soma : %d\n", iResultado);

}


