//3.Dada una matriz de 10x10 de enteros positivos genere un vector de max 100 posiciones con los números que se repitan más de 3 veces.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main()
 {
  int lista[10][10];
  int vector[100];
  int count=0;
  int countv=0;
  int encontro=0;
  int i,j,k,g;
  printf("Rellene con numeros positivos una matriz de 100x100.\n\n");
  
  for(i=0;i<10;i++)
   {
    for(j=0;j<10;j++)
	 {
	  printf("Ingrese un numero para la posicion [%d,%d]: ",i+1,j+1);
	  scanf("%d",&lista[i][j]);		
	 }		
   }
   
   for(i=0;i<10;i++)
    {
	 for(j=0;j<10;j++)
	  {
       count=0;
       encontro=0;
	   for(k=0;k<10;k++)
        {
		 for(g=0;g<10;g++)
		  {
		   if(lista[i][j]==lista[k][g])
		    {
			 count++;
			 if(count>3)
			  {
			   for(int h=1;h<=countv;h++)
			    {
				 if(lista[i][j]==vector[h])
				  {
				   encontro=1;	
				  }	
				}		
			   if(encontro==0)
			    {
				 countv++;
				 vector[countv]=lista[i][j];	
				}		
			  }	
			}		
		  }	
	    }
	  }	
    }
   
  printf("\n[Buscando numeros repetidos]");
  Sleep(500);
  printf(".");
  Sleep(500);
  printf(".");
  Sleep(500);
  printf(".");
  Sleep(500);
  printf("\n");
   
   if(countv!=0)
    {
	 printf("\n");
	 printf("-------------------\n");
	 for(i=1;i<=countv;i++)
	 {
	  printf("El numero %d se repite mas de 3 veces en la matriz.\n",vector[i]);	
	 }
    }
     else
      {
	   printf("\n\nNo hay numeros que se repitan mas de 3 veces en la matriz.");		
	  }
  
  printf("\n");	  
  Sleep(300);
  printf("\n-------------------\n"); 
  printf("\n-Steban Jose Castro Perez");
  printf("\nCodigo: 1193530985\n");
  printf("\n-------------------\n"); 
  printf("\nPresiona ENTER para salir del programa.");
  printf("\n");
  printf("\n"); 

  getch();
  return 1;
 }
