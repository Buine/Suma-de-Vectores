#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
 {
  char estudiantes[2][25];
  char busqueda[2][25];
  int puesto=0;
  
  for(int i=1;i<=2;i++)
   {
    printf("Ingrese el nombre del estudiante.\n");
	printf("Nombre: ");
	scanf("%s",estudiantes[i]);
	printf("\n");		
   }
   
   printf("---------------------------------------------------\n");
   printf("Desea buscar a un estudiante en la lista\n");
   printf("Nombre: ");
   scanf("%s",busqueda[1]);
   printf("---------------------------------------------------\n");
   
   for(int b=1;b<=2;b++)
   {
    if(estudiantes[b]==busqueda[1])
	 {	  		
	  puesto=b;
	  printf("Se ha encontrado al estudiante %s, en el puesto %d.",estudiantes[b],b);
	 } 		
   }
  
  if(puesto==0)
   {
    printf("El estudiante %s no fue encontrado en la lista.\n",busqueda[1]);		
   } 
    		
  system("PAUSE");
  return 0;
 }
