/*		Uma empresa quer verificar se um empregado est� qualificado para a aposentadoria ou n�o. Para
	estar em condi��es, um dos seguintes requisitos deve ser satisfeito:

 - Ter no m�nimo 65 anos de idade.
 - Ter trabalhado no m�nimo 30 anos.
 - Ter no m�nimo 60 anos e ter trabalhado no m�nimo 25 anos.
 
		Com base nas informa��es acima, fa�a um algoritmo que leia: o n�mero do empregado (c�digo), o ano
	de seu nascimento e o ano de seu ingresso na empresa. O programa dever� escrever a idade e o tempo
	de trabalho do empregado e a mensagem 'Requerer aposentadoria' ou 'N�o requerer'.
*/

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int codigo, anon, anoe, anoatual;
	
	printf("C�digo do Empregado: ");
	scanf("%d", &codigo);
	printf("\nAno de Nascimento: "); 
	scanf("%d", &anon);
	printf("\nData de Entrada na Empresa: ");
	scanf("%d", &anoe);
	
	anoatual = 2022;
	anoe = anoatual - anoe;
	anon = anoatual - anon;
	
	if((anoe >= 30) || (anon >= 65) || (anon >= 60 && anoe >= 25)) {
		printf("\n\nEmpregado N�mero: %d\n\nRequerer Aposentadoria.", codigo);
	}else {
		printf("\n\nEmpregado N�mero: %d\n\nN�o Requerer Aposentadoria.", codigo);
	}
	
	printf("\nAno de empresa: %d", anoe);
	printf("\nAno de idade: %d", anon);
	
	return 0;
}
