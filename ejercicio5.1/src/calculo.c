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
int sumaArray(int *len, int *array, int *resultado)
{
	int retorna =0;
	if(len !=NULL&& array !=NULL && resultado!=NULL)
	{
		retorna =1;
		for(int i =0; i<*len;i++)
		{
			*resultado = array[i] + *resultado;
		}
	}
	return retorna;
}
