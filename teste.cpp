#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
 {
 int num;
 int count=0;
 int lista[100];
 printf("Ingrese 100 numeros para rellenar la lista\n");
 
 for(int i=1;i<=5;i++)
  {
   printf("-%d numero: ",i);
   scanf("%d",&num);
   lista[i]=num;		
  }
  
  printf("Numero que desea buscar: ");
  scanf("%d",&num);
  
  int posicion;
  for(int b=1;b<=5;b++)
   {
    if(lista[b]==num)
	 {
	  posicion=b;
	  count++;		
	 }		
   }
   
  printf("El numero %d se encuentra en la posicion %d y se repite %d veces.\n",num,posicion,count);
  		
 getch();
 return 1;
 }

