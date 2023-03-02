#include <stdio.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale (LC_ALL, "Portuguese");
	// Elabore um programa em C/C++ que leia um vetor X com 10 números e calcule e imprima a diferença entre o 
    //maior e o menor elemento existente no vetor, bem como as posições que o maior e o menor ocupam no 
    //conjunto de dados.

    int i, X[10], menor=99999, maior=-99999, pme, pma, dif;
    for (i=0; i < 10; i++)
    {
    	printf("Número: "); scanf("%d", &X[i]);
    	if(X[i]>maior)
    	{
    		maior=X[i];pma=i;
		}
		if(X[i]<menor)
    	{
    		menor=X[i];pme=i;
		}
	}
	dif = maior-menor;
    printf("O Número maior é: %d e está na posição: %d", maior,pma);
    printf("\nO Número menor é: %d e está na posição: %d", menor, pme);
}
