/*
 ============================================================================
 Name        : 4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Pedir 10 números entre -100 y 100, guardarlos en un Array. Determinar:
a) Cantidad de negativos.
b) Sumatoria de los impares.
c) El mayor de los pares.
d) Listado de los números ingresados.
e) Listado de los números mayores a 15.
f) Listado de los números de las posiciones impares.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "input.h"

int main(void) {

	int len = 4;
	int cotaInferior =-100;
	int cotaSuperior = 100;
	int numeros[len];
	int retorno;
	int contadorNeg=0;
	int sumaImpar =0;
	int mayorPar =0;
	int flag =0;

	retorno = inputArray(&len, &cotaInferior, &cotaSuperior,numeros);
	if(retorno == 1)
	{

		for(int i = 0;i<len; i++)
		{
			//a)
			if(numeros[i] < 0)
			{
				contadorNeg ++;
			}
			//b)
			if(numeros[i] % 2 !=0)
			{
				sumaImpar = numeros[i] + sumaImpar;
			}else
			{
				//c)
				if(flag == 0 || numeros[i] > mayorPar)
				{
					mayorPar = numeros[i];
					flag =1;
				}
			}
		}
		printf("\nLos negativos son: %d\n", contadorNeg);
		printf("\nla suma de los impares es: %d\n", sumaImpar);
		printf("\nEl mayor de los pares es: %d\n", mayorPar);
		//d)
		printf("\nListado de los números ingresados.\n");
		for(int i = 0;i<len; i++)
		{
			printf("\n%d",numeros[i]);
		}
		printf("\nListado de los números mayores a 15.\n");
		for(int i = 0;i<len; i++)
		{
			//e)
			if(numeros[i] > 15)
			{
				printf("\n%d",numeros[i]);
			}
		}

	}else{
		printf("No se pudo procesar los datos");
	}
	return EXIT_SUCCESS;
}
