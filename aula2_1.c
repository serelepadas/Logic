// lib

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// var

int faltasAluno;

float p1, p2, t, m;

// body

int main () {
	
	
	// Captura as faltas
	
	printf ("\n Quantas faltas o aluno tem? ");
	fflush (stdin); scanf ("%i", &faltasAluno);
	
	
	// Testa se o aluno estourou em faltas (faltas > 23)
	
	if (faltasAluno > 23) {
		printf ("\nAluno retido por faltas");
	} else { 	// Se não reprovou por faltas, captura as notas do aluno
		printf ("\nAluno não estourou por falta");
		// Calcula a média
		printf ("\nDigite a nota de p1: ");
		fflush (stdin); scanf ("%f", &p1);
		printf ("\nDigite a nota de p2: ");
		fflush (stdin); scanf ("%f", &p2);
		printf ("\nDigite a nota de trabalho: ");
		fflush (stdin); scanf ("%f", &t);
		
		m = (p1 + p2 + t) / 3;
		
		printf ("\n\nA média foi = %f ", m );
		
		
		if ( m >= 6) {
			printf ("\n Você foi aprovado, little Padawan");
		} else {
			if (m < 4) {
				printf ("\n Aluno em retido para o próximo Semestre! ");
			} else {
				printf ("\n Aluno está em IFA!");
			}
		}
		getch();
		return 0;
	}
	
	
	// Verificar se o aluno está: aprovado/retido/IFA
	
	
	
}
