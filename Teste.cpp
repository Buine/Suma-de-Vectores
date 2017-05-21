#include <stdio.h>
#include <stdlib.h>


int main (){
	
	//Dada una matriz de 10*10 buscar los que se repitan 2 veces y guardarlos en un vector de50 posiciones.
	
	int m[5][5];
	int cont=0,conte=0;
	int i,j,k,l;
	int v[50];
	
	for(i=0;i<5;i++){
		for (j=0;j<5;j++){
			
			printf ("\n Por favor ingrese valores de M[%d, %d]= ",i+1,j+1);
			scanf("%d",&m[i][j]);
			
		}
	}
	
	printf ("La matriz queda de la siguente forma\n");
	
		for(i=0;i<5;i++){
		for (j=0;j<5;j++){
			
			printf (" %d ",m[i][j]);
						
		}
		printf("\n");
	}
	
	for (i=0;i<5;i++){
		for(j=0;j<5;j++){
			conte=0;
			for(k=0;k<5;k++){
				for(l=0;l<5;l++){
					if(m[i][j]==m[k][l]){
						conte++;
					 if(conte>=3){
						
						v[cont]=m[i][j];
							cont++;
					}
					}				
					
				}
			}
		}
	}
	
	for (i=0;i<cont;i++){
		printf ("%d\n",v[i]);
	}
	
	system("PAUSE");
	return 0;
	
		
	
	
}
