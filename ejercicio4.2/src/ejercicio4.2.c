/*
 ============================================================================
 Name        : Adriana Maria Davalos Insaurralde
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Realizar una función Suma que reciba como parámetros dos enteros (los que
va a sumar) y un puntero a entero que guardara el resultado de esta. La función retorna 1 si
pudo realizar la suma y cero en caso de no haberla podido realizar.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioCalculo.h"

int main(void) {
	int primerNumero;
	int segundoNumero;
	int resultado;
	int retorno;
	pedirNumero(&primerNumero, &segundoNumero);
	retorno = suma(&primerNumero, &segundoNumero, &resultado);
	if(retorno == 1)
	{
		printf("La suma es: %d", resultado);
	}else
	{
		printf("No se pudo realizar la suma");
	}


	return EXIT_SUCCESS;
}
