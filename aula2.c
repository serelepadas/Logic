// Library
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Global Var's

char s1, s2, s3, s4;

// Body

int main () {
	printf ("Digite a senha: ");
	// fflush (stdin); Esvaziar Buffer do Teclado
	fflush (stdin); s1 = getch(); printf ("*");
	fflush (stdin); s2 = getch(); printf ("*");
	fflush (stdin); s3 = getch(); printf ("*");
	fflush (stdin); s4 = getch(); printf ("*");
	
	// Pass Validation
	if (s1 == '1' && s2 == '2' && s3 == '3' && s4 == '4'){
		printf ( "\n====================================" );
		printf ( "\n Seja BEM-VINDO Padawan! " );
		printf ( "\n====================================" );
		
	} else {
		printf ("\nSenha errada! Adeus little Padawan! \a\a\a"); // COLOCAR EM UM LOOP PARA REPETIR A SENHA
	}
	getch (); // Waiting Press
	return 0;
}


