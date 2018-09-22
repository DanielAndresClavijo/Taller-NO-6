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
	int f, c, f2, c2, f3, c3, sum;
	int mat[3][3], mat2[3][3];
	//Matriz1
	printf("Primera Matriz\n");
	for(f=0;f<3;f++)
	{
		for(c=0;c<3;c++)
		{
			printf("Ingrese los valores de la posicion %i x %i: ", f,c);
			scanf("%i", &mat[f][c]);
		}
	}
	printf("\n");
	//Matriz2 
	printf("Segunda Matriz\n");
	for(f2=0;f2<3;f2++)
	{
		for(c2=0;c2<3;c2++)
		{
			printf("Ingrese los valores de la posicion %i x %i: ", f2,c2);
			scanf("%i", &mat2[f2][c2]);
		}
	}
	printf("\n");
	//Matriz 3 - Suma de las dos matrices
	printf("Suma de las dos matrices\n");
	for(c3=0;c3<3;c3++)
	{
		for(f3=0;f3<3;f3++)
		{
			sum=mat[f3][c3]+mat2[f3][c3];
			printf("%i\t ", sum);
		}
		printf("\n");
	}
}
