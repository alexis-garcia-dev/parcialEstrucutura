#include<stdio.h>
int main(){
	

int tam;
int com=0;
int aux=0;

printf("\nTamaño de la matriz n");	
scanf("%d",&tam);	

int matriz[tam][tam];

for (int i = 0; i < tam ; i++)
{
	for (int j = 0; j < tam; j++)
	{
		printf("Ingrese Elementos [%d,%d]",(i+1),(j+1));
		scanf("%d",&matriz[i][j]);
		
	if (i==0)
	{
	com=com+matriz[i][j];	
	  }
	}
}
int fila=0,columna=0;


for (int i = 0; i <tam ; i++)
{
	for (int j = 0; j <tam ; j++)
	{
		printf("Elementos %d\n",matriz[i][j]);
	}
	
}
int con=0,dlp=0,dls=0;

for (int i = 0; i < tam; i++)
{
	for (int j = 0; j < tam; j++)
	{
  columna=columna+matriz[j][i];		
  fila=fila+matriz[i][j];		
	
	if (j==j-1)
	{
	
if (fila!=com && columna!=com)
  {
	printf("\nLa matriz no es amiga\n");
	con++;
	fila=0;
	columna=0;
	break;
  }else{
	fila=0;
	columna=0;
  }	
	}
	
	}
	

}

if (con==0)
{  
	for (int i = 0; i < tam; i++)
	{
	dlp=dlp+matriz[i][i];	
	}


	for (int i = tam-1; i >=0; i--)
	{
	dls=dls+matriz[i][aux];
	aux++;	
	}
	
if (dls==com && dlp==com)
{
printf("La matriz es amiga\n");



}else{
	printf("La matriz no es amiga\n");

	}
  }
	
	
	return 0;
	
	
	
	}
