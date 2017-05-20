//Dada una matriz de 3x6 de numeros reales ordene la matriz de menor a mayor.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main() 
 { 	
  float lista[3][6];
  float num;
  int i,j,k,g;
  printf("Rellene la siguiente matriz de 3x6 con numeros.\n\n");
  
  for(i=0;i<3;i++)
   {
    for(j=0;j<6;j++)
	 {
	  printf("Rellene la posicion [%d,%d] con un numero: ",i+1,j+1);
	  scanf("%f",&lista[i][j]);		
	 }		
   }
   
  for(i=0;i<3;i++)
   {
    for(j=0;j<6;j++)
	 {
      for(k=0;k<3;k++)
       {
	    for(g=0;g<6;g++)
		 {
		  if(lista[i][j]>lista[k][g])
		   {
		    num=lista[i][j];
			lista[i][j]=lista[k][g]; //Metodo de la burbuja.
			lista[k][g]=num;		
		   }		
		 }	
	   }
	 }
   }
  
  printf("\n[Organizando la matriz]");
  Sleep(500);
  printf(".");
  Sleep(500);
  printf(".");
  Sleep(500);
  printf(".");
  Sleep(500);
  printf("\n");
  printf("\n-------------------\n"); 
  printf("La lista organizada de menor a mayor:\n\n");

  for(i=2;i>=0;i--)
   {
    for(j=5;j>=0;j--)
	 {
	  printf("Posicion [%d,%d]: %.3f.\n",3-i,6-j,lista[i][j]);
	 }		
   }
   
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
