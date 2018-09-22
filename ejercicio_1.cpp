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
	int mat[3][4];
	//Matriz
	for(f=0;f<3;f++)
	{
		for(c=0;c<4;c++)
		{
			printf("Ingrese los valores de la posicion %i x %i: ", f,c);
			scanf("%i", &mat[f][c]);
		}
	}
	//- Imprimir la primera fila
	printf("Matriz primera fila \n");
	for(c=0;c<4;c++)
	{
		printf("%i\t -\t -\t\n", mat[0][c]);
	}
	printf("\n");
	//- Imprimir la ultima fila
	printf("Matriz ultima fila \n");
	for(c=0;c<4;c++)
	{
		printf("-\t -\t %i\n", mat[2][c]);
	}
	printf("\n");
	//- Imprimir la primera columna
	printf("Matriz primera columna \n");
	for(f=0;f<3;f++)
	{
		printf("%i\t ", mat[f][0]);
	}
	/*Guiones para representar los espacios que 
	quedan en la matriz imprimiendo la primera columna*/
	printf("\n-\t -\t -\t \n-\t -\t -\t \n-\t -\t -\t");
}
