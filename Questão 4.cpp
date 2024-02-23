#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define T 5
#define TAM 10

typedef char String[TAM];

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float Faturamento[T] = {67836.43, 36678.66, 29229.88, 27165.48, 19849.53};
    float ValorTotal = 0, Percentual[T];
    String Estados[T] = {"SP", "RJ", "MG", "ES", "outros"};
    int A;
    
    for(A=0; A<T; A++)
    {
    	ValorTotal = ValorTotal + Faturamento[A];
	}
	
	for(A=0; A<T; A++)
	{
		Percentual[A] = (Faturamento[A] * 100) / ValorTotal;
	}
	
	for(A=0; A<T; A++)
	{
		printf("\n%s - R$ %.2f - %.2f%%", Estados[A], Faturamento[A], Percentual[A]);
	}

    return 0;
}
