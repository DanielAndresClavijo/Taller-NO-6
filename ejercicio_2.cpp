/*
Programa: matrices
Fecha: 21/09/2018
Creador: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
#include <conio.h>

int main() 
{
	//Definicion de variables
	int f, c;
	int mat[2][5];
	//Matriz
	for(c=0;c<5;c++)
	{
		printf("Ingrese los valores de la columna %i:\n",c);
		for(f=0;f<2;f++)
		{
			scanf("%i", &mat[f][c]);
		}
	}
	//Imprimir los valores de la matriz
	printf("Estos son los valores de la matriz \n");
	for(c=0;c<5;c++)
	{
		for(f=0;f<2;f++)
		{
			printf("   %i\t ", mat[f][c]);
		}
		printf("\n");
	}
}
