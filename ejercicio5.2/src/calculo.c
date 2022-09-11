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
int promedioArray(int *len, int*array, float *resultado)
{
	int retorno=0;
	int acumArray =0;

	if(len != NULL && array != NULL && resultado != NULL){
		for(int i=0; i<*len; i++)
		{
			acumArray = array[i]+acumArray;
		}
		*resultado = (float)acumArray/ *len;
		retorno =1;
	}
	return retorno;
}
