#include<stdio.h>
#include<stdlib.h>
main()
{
	int a, b, c, col1, col2, col3;
	    
	    printf("Digite tres numeros inteiros:\n");
	    scanf("%d %d %d", &a, &b, &c);
	    
	     if  ((a > b) && (a > c))  
	    {
	 		
	 		col2 = b;
	 		col3 = c;
	 		col1 = a;
	    }
	    
		 if  ((b > a ) && (b > c)) 
	    {
	 		
			col1 = a;
			col3= c;
            col2 = b;	
        } 
        
		
        if  ((c > a) && (c > b))
	    {
	 	
	 		col2 = a;
	 		col1 = b;
		 	col3 = c;
        }
		
		//
		
		   if  ((a < b) && (a < c))  
	    {
	 		 col1 = a;
	 		 col2 = b;
	 		 col3 = c;
	    }
	    
		 if  ((b < a ) && (b < c)) 
	    {
	 		col1 = b;
		    col2= a;
            col3 = c;	
        } 
		
        if  ((c < a) && (c < b))
	    {
	 		col1 = c;
	 		col2 = a;
	 		col3 = b;
        }
		
		
		
		
		
	    printf("Os numeros em ordem crescente sao: %d %d %d",col1 , col2 ,col3);	    
         	 	
   			
	system("pause");
}






