#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>
#define T 100

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char Frase[T], FraseInvertida[T];
	int A, B, C;

	printf("Digite uma frase: ");
	gets(Frase);
	
	A = strlen(Frase);
	C = 0;

	for(B=A-1; B>=0; B--)
	{
		FraseInvertida[C] = Frase[B];
		C++;
	}
	
	FraseInvertida[A] = '\0';
	printf("\nFrase Invertida: ");
	printf("%s", FraseInvertida);

	return 0;
}

