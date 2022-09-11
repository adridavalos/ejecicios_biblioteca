/*
 ============================================================================
 Name        : Adriana Maria Davalos Insaurralde
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Hacer una función que calcule el promedio de los valores del Array que
recibe y me devuelva el promedio.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculo.h"
int main(void)
{
	int len = 3;
	int valores[len];
	int retorno;
	float resultado =0;


	retorno = arrayEnteros(&len, valores);

	if(retorno == 1)
	{
		promedioArray(&len, valores , &resultado);
		printf("El promedio es: %.2f", resultado);
	}else
	{
		printf("No se pudo calcular");
	}

	return EXIT_SUCCESS;
}
