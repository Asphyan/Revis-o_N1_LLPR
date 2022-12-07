/*
Ler um valor e escrever se é positivo, negativo ou zero.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num, rep;

	printf("\n\nVERIFICADOR DE POSITIVO, NEGATIVO E ZERO\n\n");
	
	do {
		printf("\nEscreva o número a ser verificado: ");
		scanf("%d", &num);
	
		if(num > 0) {
			printf("\nSeu número é positivo.\n");
		}
		if(num == 0) {
			printf("\nSeu número é igual a zero.\n");
		}
    	if(num < 0) {
			printf("\nSeu número é negativo.\n");
		}
		printf("\nPara repetir o processo digite:\n1 - Continuar\n0 - Encerrar\n");
		scanf("%d", &rep);

    } while (rep == 1);
    
	return 0;
}
