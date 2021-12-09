#include<stdio.h>
#include<stdlib.h>
main()
{
    int id, soma_id=0,qt_id, x;
    float media;
    
      printf("quantas idades serao selecionadas? ");
      scanf("%d",&qt_id);
      
      for(x=1; x <= qt_id; x++)
      { 
         printf("digite a idade %d: ", x);
         scanf("%d", &id);
         soma_id = soma_id + id;
	  }
	system("cls");
	media = soma_id/qt_id;
	printf("Media de idade e de : %.1f ",media);
	return(0);
}ss
