/*
 * biblioCalculo.c
 *
 *  Created on: Sep 8, 2022
 *      Author: advalos
 */

#include <stdio.h>
#include <stdlib.h>

void pedirNumero(int *numUno, int *numDos)
{
	if(numUno!= NULL && numDos != NULL)
	{
		printf("Ingrese primer numero:");
		scanf("%d", numUno);
		printf("Ingrese segundo numero:");
		scanf("%d", numDos);
	}

}
int suma(int *numUno, int *numDos, int *resul)
{
	int retorno =0;
	if(numUno!= NULL && numDos != NULL && resul != NULL)
	{
		*resul = *numUno + *numDos;
		retorno = 1;
	}
	return retorno;
}
