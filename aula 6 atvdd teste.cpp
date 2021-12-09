#include<stdio.h>
#include<stdlib.h>
main()
{
 	char nome[10];
 	int n1,n2;
 	
 	printf("Digite um nome; ");
	scanf("&s",&nome);
	printf("quantas vezes voce quer que se repita?");
	scanf("%d",&n2);
	
	for(n1 = 1 ; n1<=n2 ;n1++)
	{
		printf("%s\n", nome);
	}
	
	system("pause");
}

