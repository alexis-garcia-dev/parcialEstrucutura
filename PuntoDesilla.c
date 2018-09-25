#include <stdio.h>

  
  
int main(){


int tam;

printf("\nIngrese el tamaño de la matriz\n");	
scanf("%d",&tam);	


int matriz[tam][tam];


for (int i = 0; i < tam ; i++)
{
	for (int j = 0; j < tam; j++)
	{
		printf("Elemento de la Matriz[%d,%d]\n",(i+1),(j+1));
		scanf("%d",&matriz[i][j]);
	}
	
}
for (int i = 0; i < tam; i++)
{
	for (int j = 0; j < tam; j++)
	{
		printf("Elementos %d\n",matriz[i][j]);
		
	}
	
	
}
int var,min;
int cont;

for (int i = 0; i < tam ; i++)
{   
	min=matriz[i][i];  
	for (int j = 0; j < tam; j++)
	{
	   if (min > matriz[i][j])
	   {    var=j; 
		   min=matriz[i][j];
	   }
	   
	   if (j==tam-1)
	   {  
		
		for ( int l=0; l < tam ; l++)
		{   
		   if (min<matriz[l][var])
		   {
			  cont++;
		   }else{
			   cont=0;
			   }
		}
		if (cont==0)
		{
			printf("\nposicion%d-%d\n",i,j);
		printf("\npunto de silla es\n");
		
		printf("%d",min);
		cont=0;

     		}else{
		printf("\nNo hay punto de silla\n");
		cont=0;
		}
	      }
	     
		}
}


	
	
	
	return 0;
	
	}

