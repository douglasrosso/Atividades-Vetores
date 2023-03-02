#include <stdio.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale (LC_ALL, "Portuguese");
	//Elabore um programa em C/C++ que armazene números em dois vetores inteiros de cinco elementos cada (A 
    //e B), gere e imprima o vetor soma.
    
    int i, A[5], B[5], S[5];
    float soma=0;
    
    printf("Informe a leitura do vetor A...\n");
    for(i=0; i<5; i++)
    {
    	printf("Número: "); scanf("%d", &A[i]);
	}
	
    printf("Informe a leitura do vetor B...\n");
    for(i=0; i<5; i++)
    {
    	printf("Número: "); scanf("%d", &B[i]);
    	S[i]=A[i]+B[i];
	}
	
	printf("\n\nVetor A\n\n");
	for(i=0; i<5; i++)
    {
    	printf("%d\t", A[i]);
	}
	
	printf("\n\nVetor B\n\n");
	for(i=0; i<5; i++)
    {
    	printf("%d\t", B[i]);
	}
	
	printf("\n\nVetor S\n\n");
	for(i=0; i<5; i++)
    {
    	printf("%d\t", S[i]);
	}
}
