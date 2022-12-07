/*		Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não. Para
	estar em condições, um dos seguintes requisitos deve ser satisfeito:

 - Ter no mínimo 65 anos de idade.
 - Ter trabalhado no mínimo 30 anos.
 - Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.
 
		Com base nas informações acima, faça um algoritmo que leia: o número do empregado (código), o ano
	de seu nascimento e o ano de seu ingresso na empresa. O programa deverá escrever a idade e o tempo
	de trabalho do empregado e a mensagem 'Requerer aposentadoria' ou 'Não requerer'.
*/

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int codigo, anon, anoe, anoatual;
	
	printf("Código do Empregado: ");
	scanf("%d", &codigo);
	printf("\nAno de Nascimento: "); 
	scanf("%d", &anon);
	printf("\nData de Entrada na Empresa: ");
	scanf("%d", &anoe);
	
	anoatual = 2022;
	anoe = anoatual - anoe;
	anon = anoatual - anon;
	
	if((anoe >= 30) || (anon >= 65) || (anon >= 60 && anoe >= 25)) {
		printf("\n\nEmpregado Número: %d\n\nRequerer Aposentadoria.", codigo);
	}else {
		printf("\n\nEmpregado Número: %d\n\nNão Requerer Aposentadoria.", codigo);
	}
	
	printf("\nAno de empresa: %d", anoe);
	printf("\nAno de idade: %d", anon);
	
	return 0;
}
