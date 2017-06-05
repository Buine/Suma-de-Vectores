#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void funcion(int matriz[8][8]);

int main()
 {
  int matriz[8][8];
  int i; int j; int f; int c;
  printf("Ingrese la posicion de la reina en el tablero.\n\n");
  printf("Fila: ");
  scanf("%d",&f);
  printf("Columna: ");
  scanf("%d",&c);
  
  for(i=0;i<8;i++)
   {
    for(j=0;j<8;j++)
	 {
	  matriz[i][j]=0;
	 }		
   }
   
   matriz[f][c]=1;
   
   funcion(matriz);		
  
  getch();
  return 0;
 }
 
 void funcion(int matriz[8][8])
  {
	for(int i=0;i<8;i++)
    {
	 for(int j=0;j<8;j++)
	  {
         int l;
         
		 int d=0;
         int i=0;
         int a=0;
         int ab=0;
         int ad=0;
         int ai=0;
         int abd=0;
         int abi=0;
		 
		 int f1=i;
         int c1=j;
		 for(l=0;l<8;l++)//Derecha
		  {
		   c1++;
		   if(c1<8)
			{
			 if(matriz[f1][c1]!=1)
			  {
			   if(c1==7)
				{
				 d=1;
				}
			  }
		    }
	      }
	      
	     f1=i;
         c1=j;
		 for(l=0;l<8;l++)//Izquierda
		  {
		   c1--;
		   if(c1>=0)
			{
			 if(matriz[f1][c1]!=1)
			  {
			   if(c1==0)
				{
				 i=1;
				}
			  }
		    }
	      }
	      
	     f1=i;
         c1=j;
		 for(l=0;l<8;l++)//Abajo
		  {
		   f1++;
		   if(c1<8)
			{
			 if(matriz[f1][c1]!=1)
			  {
			   if(f1==7)
				{
				 ab=1;
				}
			  }
		    }
	      }
	      
	     f1=i;
         c1=j;
		 for(l=0;l<8;l++)//Arriba
		  {
		   f1--;
		   if(f1>=0)
			{
			 if(matriz[f1][c1]!=1)
			  {
			   if(f1==0)
				{
				 a=1;
				}
			  }
		    }
	      }
	      
	     f1=i;
         c1=j;
		 for(l=0;l<8;l++)//Arriba Derecha
		  {
		   if((f1-1)<=0)
		    {
			 ad=1;
			}
			 else
			  {
			   f1--;
			   c1++;
			   if((f1>=0)&&(c1<8))
				{
				 if(matriz[f1][c1]!=1)
				  {
				   if((c1==7)&&(f1==0))
					{
					 ad=1;
					}
				  }
			    }
		      }
	      }
	      
	     f1=i;
         c1=j;
		 for(l=0;l<8;l++)//Arriba Izquierda
		  {
		   if((f1-1)<=0)
		    {
			 ai=1;
			}
			 else
			  {
			   f1--;
			   c1--;
			   if((f1>=0)&&(c1>=0))
				{
				 if(matriz[f1][c1]!=1)
				  {
				   if((c1==0)&&(f1==0))
					{
					 ai=1;
					}
				  }
			    }
			  }
	      }
	      
	     f1=i;
         c1=j;
		 for(l=0;l<8;l++)//Abajo Izquierda
		  {
		   if((f1+1)>7)
		    {
			 abi=1;
			}
			 else 
			  {
			   f1++;
			   c1--;
			   if((f1<8)&&(c1>=0))
				{
				 if(matriz[f1][c1]!=1)
				  {
				   if((c1==0)&&(f1==7))
					{
					 abi=1;
					}
				  }
			    }
		      }
	      }
	      
	     f1=i;
         c1=j;
		 for(l=0;l<8;l++)//Abajo Derecha
		  {
		   if((f1+1)>7)
		    {
			 abd=1;
			}
			else
			 {
			   f1++;
			   c1++;
			   if((f1<8)&&(c1<8))
				{
				 if(matriz[f1][c1]!=1)
				  {
				   if((c1==7)&&(f1==7))
					{
					 abd=1;
					}
				  }
			    }
		     }
	      }
        
        if((d==1)&&(i==1)&&(a==1)&&(ab==1)&&(ad==1)&&(ai==1)&&(abd==1)&&(abi==1))
         {
		  printf("[%d,%d]\n",i,j);
		  matriz[i][j]=1;		
		 }
		
	  }
	}		
  }
