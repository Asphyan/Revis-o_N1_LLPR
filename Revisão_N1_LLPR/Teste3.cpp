/*
		Ler o n�mero de alunos existentes em uma turma e, ap�s isto, ler as notas destes alunos, calcular e
	escrever a m�dia aritm�tica dessas notas lidas.
*/

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num_alunos, cont, saux = 0, aluno_aux = 0;
	float nota, media;
	
	printf("CALCULADORA DE M�DIA Beta 2.3.434\n\n");
	
	printf("Digite o n�mero de alunos: ");
	scanf("%d", &num_alunos);
	
	cont = 0;
	
	while(cont < num_alunos){
		printf("\nDigite a nota do aluno %d: ", aluno_aux = aluno_aux + 1);
		scanf("%f", &nota);
		cont = cont + 1;
		saux = saux + nota;
	}
	media = saux / num_alunos;
	printf("\nM�dia dos alunos = %.1f", media);
	return 0;
}
