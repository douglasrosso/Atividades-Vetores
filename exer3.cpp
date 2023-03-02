#include <stdio.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale (LC_ALL, "Portuguese");
	//Elabore um programa em C/C++ que leia 5 valores do tipo int em um vetor A. Ao final, imprima todos os 
    //elementos, o maior, o menor, e a média dos valores informados.
    
    int i, A[5], maior, menor;
    float soma;
    for (i = 0; i < 5; i++)
    {
    	printf("Número: "); scanf("%d", &A[i]);
	}
	// Feito outro for fora pois, ele vai imprimir apenas no final, após receber os 5 valores
	// Ele conta 5 vezes denovo para imprimir um de cada vez, o \t é colocado para ficar um ao lado do outro
	for (i = 0; i < 5; i++)
    {
    	soma+=A[i];
    	printf("\n%d\t", A[i]);
    	if(A[i]>maior)
    	{
    		maior=A[i];
		}
		if(A[i]<menor)
    	{
    		menor=A[i];
		}
	}
	printf("\n\nA média é: %.2f", soma/5);
	printf("\nO maior valor é: %d", maior);
	printf("\nO menor valor é: %d",  menor);
    
}
