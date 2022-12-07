/*
Escreva um algoritmo que imprima a tabuada (de 1 a 10) para os números de 1 a 10.
*/

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("TABUADA\n\n");
	
	int a, num, cont = 0;
	
	printf("Digite o número da tabuada que deseja ver: ");
	scanf("%d", &num);
	
	do {
	
	for(int a = 0; a <= 10; a++) {
		printf("\n%d x %d = %d\n", a, num, num * a);
		cont = cont + 1;
	}
    } while (cont == 10); {
    	scanf("%d", & cont);
	}
	return 0;
}
