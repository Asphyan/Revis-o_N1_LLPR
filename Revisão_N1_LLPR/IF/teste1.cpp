/*
Ler um valor e escrever se � positivo, negativo ou zero.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num, rep;

	printf("\n\nVERIFICADOR DE POSITIVO, NEGATIVO E ZERO\n\n");
	
	do {
		printf("\nEscreva o n�mero a ser verificado: ");
		scanf("%d", &num);
	
		if(num > 0) {
			printf("\nSeu n�mero � positivo.\n");
		}
		if(num == 0) {
			printf("\nSeu n�mero � igual a zero.\n");
		}
    	if(num < 0) {
			printf("\nSeu n�mero � negativo.\n");
		}
		printf("\nPara repetir o processo digite:\n1 - Continuar\n0 - Encerrar\n");
		scanf("%d", &rep);

    } while (rep == 1);
    
	return 0;
}
