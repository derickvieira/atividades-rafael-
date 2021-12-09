#include<stdio.h>
#include<stdlib.h>
main()
{
	float a, b, c, d, nt;
	 
	printf("Digite a primeira nota: ");
	scanf("%f", &a);
	printf("Digite sua segunda nota:");
	scanf("%f", &b);
	printf("Digite sua terceira nota: ");
	scanf("%f", &c);
	printf("Digite sua quarta nota: ");
	scanf("%f", &d);
	
	nt = (a + b + c + d)/4;

	if (nt >= 7)
	{
		printf("Aprovado \t media: %.1f \n",nt);
	}
	
    if (nt < 5)
    {
    	printf("reprovado \t media: %.1f \n",nt);
	}
	
	if ((nt > 5) || (nt <= 6,9))
	{
		printf("Voce esta de recuperacao \t media: %.1f \n",nt);
	}
	
	system("pause");
	
}
