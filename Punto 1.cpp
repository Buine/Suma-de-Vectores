/** 1. Realizar un programa en C++ que rellene un array con los números primos compredidos entre 1 al 1000. **/
/**Los imprima en la pantalla en orden desendente. **/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
 int primo=0;
 int primo2=0;
 printf("Estos son los numeros primos del 1 al 1000 de manera desendiente:");
 printf("\n-------------------");
 
 for(int i=2;i<=1000;i++)
  {
   int d=0;
    for(int j=1;j<=1000;j++)
     {
	  if(i%j==0)
	   {
	    d++;		
	   }
	 }
  
  if(d==2)
   {
    primo++;
   }
  }
 
 int lista[primo]; 
 
 for(int p=2;p<=1000;p++)
  {
   int d=0;
    for(int k=1;k<=1000;k++)
     {
	  if(p%k==0)
	   {
	    d++;
	   }		
	 }
   if(d==2)
    {
	 primo2++;
	 lista[primo2]=p;
	}	 
  }
  
 for(int y=primo;y>=1;y--)
  {
   printf("\n-Numero Primo: %d.",lista[y]);
   Sleep(30);
  }
  Sleep(150);
  printf("\n-------------------\n"); 
  printf("\n-Steban Jose Castro Perez");
  printf("\nCodigo: 1193530985\n");
  printf("\n-------------------\n"); 
  Sleep(150);
  printf("\nPresiona ENTER para salir del programa.");
  printf("\n");
  printf("\n"); 

getchar();
return 0;
}

