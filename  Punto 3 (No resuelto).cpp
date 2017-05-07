#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

char nombres[5][25];
int main()
 {
  int nota;
  int v=0;
  int cont=0;int cont5=0;
  int acum=0;int acum5=0;
  int r1;int r2;
  int mejor=0;int mejorp=0;
  int peor=100;int peorp=0;
  int notas[5];
  int busqueda;
  int respuesta;
  int modificacion; 
  printf("Ingrese la informacion sobre los estudiantes.\n");
  
  for(int i=1;i<=5;i++)
  {
   printf("\n");
   printf("[Estudiante %d]\n",i);
   printf("Ingrese el nombre del estudiante: ");
   scanf("%s", nombres[i]);
   printf("Ingrese la nota del estudiante: ");
   scanf("%d", &nota);
   if((nota<=100)&&(nota>=0))
    {
	 notas[i]=nota;
	 cont++;
	 acum=acum+nota;
	 if(nota>mejor)
	  {
	   mejor=nota;
	   mejorp=i;
	  }
	   if(nota<peor)
	    {
		 peor=nota;
		 peorp=i;
		}
		  if(nota<=50)
		  {
			cont5++;
			acum5=acum5+nota;	
		  }
	}
	 else
	  {
	   printf("\nLa nota no es valida, las calificaciones van de 0 a 100.\n");
	   printf("Vuelva a ingresar al ultimo estudiante ingresado.\n");
	   i--;
	  }
   fflush(stdin);
  }
   printf("\n");
   printf("\n---------------------[LISTA]-----------------------\n");
   for(int p=1;p<=5;p++)
	   {
	    printf("[Estudiante %d]: %s. [Nota]=%d\n",p, nombres[p], notas[p]);
	   }
  printf("----------------------------------------------------\n");
  r1=acum/cont;
  r2=acum5/cont5;
  printf("\n-Resumen del los estudiantes:");
  printf("\nMedia de todas las notas: %d.",r1);
  printf("\nMedia de las notas menores de 50: %d.",r2);
  printf("\nMejor Alumno: [Estudiante %d]: %s. [Nota]= %d",mejorp, nombres[mejorp], mejor);
  printf("\nPeor Alumno: [Estudiante %d]: %s. [Nota]= %d",peorp, nombres[peorp], peor);
  printf("\nBuscar un alumno y/o modificar nota?");
  printf("\n[Respuestas] [Si=1/No=0]: ");
  scanf("%d", &respuesta);
   
   do{
    if(respuesta==1)
     {
      /** Buscador de estudiantes **/
      char busq[2][25];
      printf("\nIngrese el nombre del estudiante que desea buscar.\n");
	  printf("Nombre: ");
	  scanf("%s",busq[1]);
	  printf("%s",busq[1]);
	  printf("%s",nombres[3]);
	  for(int b=1;b<=5;b++)
       {
	    if(busq[1]==nombres[b])
	     {
		  busqueda=b;
		  v=1;		
		 }
	   }
	   if(v!=0)
	    {
		 printf("\n[Estudiante %d]: %s. [Nota]=%d.\n",busqueda, nombres[busqueda], notas[busqueda]);
		 respuesta=95959;	
		}
		 else
		  {
		   printf("\nEl alumno no fue encontrado asegurese de escribir bien el nombre.\n");
		   printf("\nDesea intentar buscar de nuevo al alumno?");
		   printf("\n[Respuestas] [Si=1/No=0]: ");
           scanf("%d", &respuesta);
		  }
		}
	  }while(respuesta==1);  
      /** -Modificar Notas- **/
      if(respuesta==95959);
       {
	    printf("Desea modificar la nota del estudiante?");
	    printf("\n[Respuestas] [Si=1/No=0]: ");
        scanf("%d", &respuesta);
        do{ 
		 if(respuesta==1)
          {
		   printf("\n");
		   printf("\nNota con la que remplazara la nota actual:");
		   printf("\n[Nota]= ");
		   scanf("%d", &modificacion);
		   notas[busqueda]=modificacion;
		   printf("\n");
		   printf("\nLa nota del estudiante: %s, ahora es: %d.",nombres[busqueda], notas[busqueda]);
		   printf("\n");
		   printf("\nDesea remplazar la nota de otro estudiante");
		   printf("\n[Respuestas] [Si=1/No=0]: ");
           scanf("%d", &respuesta);
		  }
		  }while(respuesta==1);
		 printf("Desea imprimir la lista de estudiantes con los cambios realizados:");
		 printf("\n[Respuestas] [Si=1/No=0]: ");
         scanf("%d", &respuesta);
         
		 if(respuesta==1)
		 {
		  printf("\n");
          printf("\n---------------------[LISTA]-----------------------\n");
          for(int q=1;q<=5;q++)
	      {
	       printf("[Estudiante %d]: %s. [Nota]=%d\n",q, nombres[q], notas[q]);
	      }
          printf("----------------------------------------------------\n"); 
		 }
	   }
      /** ----------------------------- **/
	 Sleep(150);
	 printf("\n");
	 printf("\n-------------------\n"); 
	 printf("\n-Steban Jose Castro Perez");
	 printf("\nCodigo: 1193530985\n");
	 printf("\n-------------------\n"); 
	 Sleep(150);
	 printf("\nPresiona ENTER para salir del programa.");
	 printf("\n");
	 printf("\n"); 
	 
	 system("PAUSE");
	 return 0;
	 }
	  
