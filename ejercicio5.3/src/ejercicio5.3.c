/*
 ============================================================================
 Name        : 3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Realizar una función que reciba como parámetros un array de enteros y
un entero por referencia. La función calculara el máximo valor de ese array y utilizara
el valor por referencia para retornar ese valor.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculo.h"
int main(void) {

	int retorno;
	int len =3;
	int array[len];
	int valorPorReferencia =1;
	int result =0;

	retorno = arrayEnteros(&len, array);
	if(retorno == 1)
	{
		maximoValorArray(&valorPorReferencia, &len,array, &result);
		printf("El mayor de los numeros es: %d", result);

	}else
	{
		printf("No se pudo realizar los calculos");
	}

	return EXIT_SUCCESS;
}
