#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int ValorProcurado, ValorAtual, ValorAnterior, Auxiliar, Flag;
    Flag = 0;
    ValorAtual = 1;
    ValorAnterior = 0;

    printf("Digite um valor: ");
    scanf("%i", &ValorProcurado);

    if (ValorProcurado == 0)
    {
        printf("\nO número %i pertence a sequencia de Fibonacci.", ValorProcurado);
        exit(1);
    }

    while (ValorAtual <= ValorProcurado)
    {
    	if (ValorAtual == ValorProcurado)
        {
            printf("\nO número %i pertence a sequencia de Fibonacci.", ValorProcurado);
            Flag = 1;
            break;
        }
        Auxiliar = ValorAnterior;
        ValorAnterior = ValorAtual;
        ValorAtual = Auxiliar + ValorAnterior;
    }

    if(Flag == 0)
    {
        printf("\nO número %i não pertence a sequencia de Fibonacci.", ValorProcurado);
    }

    return 0;
}
