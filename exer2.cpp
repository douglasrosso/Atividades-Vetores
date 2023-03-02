#include <stdio.h>
#include <math.h>
#include <locale>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float notas[3], soma=0;
	for(i=0; i<3; i++)
	{
		printf("Nota: ");
		scanf("%d", &notas[i]);
	}

	for(i=0; i<3; i++)
	{
		printf("Nota %d: %f\n", i+1, notas[i]);
		soma=soma+notas[i];
	}
	printf("Média: %f", soma/3);
	
}
