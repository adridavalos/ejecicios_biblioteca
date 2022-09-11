/*
 ============================================================================
 Name        : Adriana Maria Davalos Insaurralde
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Pedir 10 números enteros distintos de cero entre -50 y 75. La carga
deberá ser aleatoria (todos los elementos se inicializan en cero por default).
Determinar el promedio de los positivos. Desde el mayor de los negativos los
números negativos hasta llegar a cero.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "input.h"

int main(void) {
	int len = 3;
	int cotaInferior =-50;
	int cotaSuperior =75;
	int numIni = 0;
	int array[len];
	int retornoInicia;
	int retornoInput;
	float resultado =0;

	retornoInicia = inicializaArray(&len, &numIni, array);

	if(retornoInicia == 1)
	{
		retornoInput = inputArrayAleatorio(&len, &cotaInferior, &cotaSuperior,array);
		if(retornoInput == 1)
		{
			calculaPromedioArray(&len, array, &resultado);
			printf("El promedio es: %.2f", resultado);

		}
	}else
	{
		printf("No se pudo procesar los datos");
	}

	return EXIT_SUCCESS;
}
