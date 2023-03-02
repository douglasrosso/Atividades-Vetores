#include <stdio.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale (LC_ALL, "Portuguese");
	// Elabore um programa em C/C++ que entre com 5 números inteiros em um vetor A, e imprima o índice do 
    // primeiro número negativo, se houver. Caso não existam números negativos, imprimir a seguinte mensagem 
    // “Negativo não encontrado”.
	
	int A[5], i, cont=0;
    
    for(i=0; i<=4; i++)
    {
        printf("Número: ");
        scanf("%d", &A[i]);
    }
    
    for(i=0; i<=4; i++)
    {
        if(A[i]<0)
        {    
    		printf("O Número negativo é: %d e o índice é: %d\n", A[i], i);
            i=4;
        }
    } 
	   
    for(i=0; i<=4; i++)
    {
        if(A[i]>0)
        {
            cont++;
        }
    }
    
    if(cont==5)
    {
        printf("Negativo não encontrado");
    }
	
}

