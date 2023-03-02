#include <stdio.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale (LC_ALL, "Portuguese");
	// 8) Elabore um programa em C/C++ que entre com 5 números inteiros em dois vetores A e B. Construir um vetor 
    // C, sendo este a junção dos vetores A e B. Dessa forma, C deve ter o dobro de elementos dos vetores A e B. 
    // Ao final, imprima os elementos dos 3 vetores

    int i, A[5], B[5], C[10];
    printf("Vetor A\n");
    for (i=0; i < 5; i++)
    {
    	printf("Número: ");
    	scanf("%d", &A[i]);	
	}
	printf("Vetor B\n");
	
	for (i=0; i < 5; i++)
    {
    	printf("Número: ");
    	scanf("%d", &B[i]);
	}
	printf("Vetor c\n");
	
	for (i=0; i < 10; i++)
    {
    printf("%d\t", C[i]);
	}
}
