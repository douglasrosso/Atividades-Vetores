#include <stdio.h>
#include <math.h>
#include <locale>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num[5], i;
	float soma=0;
	for(i=0; i<=4; i++)
	{
		printf("Informe um número: ");
		scanf("%d", &num[i]);
		soma=soma+num[i];
	}
	printf("A média é: %.2f\n", soma/5);
	for(i=0; i<=4; i++)
	{
		printf("%d\t", num[i]);
	}
	
	//        num (array vetor)
	//	0	1	2	3	4
	//	5	2	9	4	1 (valores aleatórios)
	
}
