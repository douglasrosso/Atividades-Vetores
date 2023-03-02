#include <stdio.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale (LC_ALL, "Portuguese");
	//Elabore um programa em C/C++ que entre com 5 números inteiros em um vetor A, e gere e imprima o vetor T 
    //triplo, que deverá conter os elementos do primeiro vetor multiplicados por 3.
    
    int i, A[5], T[5];
    for (i=0; i<5; i++)
    {
    	printf("Número: "); scanf("%d", &A[i]);
	}
	
	printf("\n\nVetor A\n\n");
	 for (i=0; i<5; i++)
    {
    	printf("%d\t", A[i]);
    	T[i]=3*A[i];
	}
	
	printf("\n\nVetor T\n\n");
	 for (i=0; i<5; i++)
    {
    	printf("%d\t", T[i]);
	}
    
    
}
