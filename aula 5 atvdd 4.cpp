#include<stdio.h>
#include<stdlib.h>
main()
{
	int a, b, c, d, e, maior, menor;
	printf("Digite um numero:");
	scanf("%d", &a);
	printf("Digite um numero:");
	scanf("%d", &b);
	printf("Digite um numero:");
	scanf("%d", &c);
	printf("Digite o quarto numero:");
	scanf("%d", &d);
	printf("Digite o quinto numero:");
	scanf("%d", &e);
	
	//maior
	
	if ((a > b) && (a > c) && (a > d) && (a > e))
	maior = a;
	  else
	  if ((b > c) && (a > d) && (a > e))
	  maior = b; 
	  		else 
	    		 if ((c > d ) && (c > e))
	    		 maior = c;
	    		 	     else 
						 	  if (d > e)
						 	  maior = d;
						 	  		else
						 	  		maior = e;
		
	//menor
	
	if ((a < b) && (a < c) && (a < d) && (a < e))
	menor = a;
	  else
	  if ((b < c) && (a < d) && (a < e))
	  menor = b; 
	  		else 
	    		 if ((c < d ) && (c < e))
	    		 menor = c;
	    		 	     else 
						 	  if (d <  e)
						 	  menor = d;
						 	  		else
						 	  		menor = e;
	
	printf("O maior numero e: %d \n",maior);
	printf("O menor numero e: %d \n",menor);					 	  		
	
	system("pause");
}
