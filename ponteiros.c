#include <stdio.h>

void main (void){
	
	/* declaracao do ponteiro piValor para inteiro  */
	int *piValor; 
	
	/*declara��o de uma vari�vel */
	int iVariavel = 27121975;	
	
	piValor = &iVariavel; /* pegando o endere�o de mem�ria da vari�vel */

	printf ("Endereco do Ponteiro: %d\n", piValor);
	printf ("Valor : %d\n", *piValor);


}
