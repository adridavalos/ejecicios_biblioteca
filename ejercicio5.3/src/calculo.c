/*
 * calculo.c
 *
 *  Created on: Sep 10, 2022
 *      Author: advalos
 */
#include <stdio.h>
#include <stdlib.h>

int arrayEnteros(int *LEN, int *numEnteros)
{
	int i;
	int num;
	int retorno;
	if(LEN != NULL && numEnteros != NULL){

		for(i=0;i<*LEN;i++)
		{
			printf("Ingrese un numero:");
			scanf("%d", &num);
			numEnteros[i] = num;
		}
		retorno =1;
	}
	return retorno;
}
int maximoValorArray(int *valorRetorno, int *len, int *array, int *result)
{
	int retorno =0;

	if(valorRetorno != NULL && len != NULL && array != NULL)
	{
		*result =  array[0];

		for(int i=0; i<*len; i++)
		{
			if(array[i] >  *result)
			{
				*result = array[i];

			}
		}

		retorno = *valorRetorno;
	}

	return retorno;

}
