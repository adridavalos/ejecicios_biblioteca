/*
 * input.c
 *
 *  Created on: Sep 11, 2022
 *      Author: advalos
 */
#include <stdio.h>
#include <stdlib.h>


int inicializaArray(int *len, int *numIni, int *array)
{
	int retorna =0;
	if(len != NULL && numIni != NULL && array !=NULL)
	{
		for(int i =0; i<*len; i++)
		{
			array[i]= *numIni;
		}
		retorna =1;
	}
	return retorna;
}

int inputArrayAleatorio(int *len, int *cotaInferior,int *cotaSuperior,int *array)
{
	int retorna = 0;
	int num;
	int posicion;
	if(len != NULL && cotaInferior != NULL && cotaSuperior !=NULL && array !=NULL)
	{
		for(int i = 0;i<*len; i++)
		{
			do{
				printf("Ingrese un numero entre -50/75");
				scanf("%d", &num);

			}while(num <*cotaInferior || num > *cotaSuperior || num == 0);
			do{
				printf("Ingrese posicion ");
				scanf("%d", &posicion);

			}while(posicion <0 || posicion >= *len);

			array[posicion] = num;
	}
		retorna = 1;
	}

	return retorna;
}
int calculaPromedioArray(int *len, int *array, float *resultado)
{
	int retorna =0;
	int acum =0;
	if(len !=NULL && array != NULL)
	{
		for(int i=0; i<*len ; i++)
		{
			acum = array[i] + acum;
		}
		*resultado = (float)acum / *len;
		retorna = 1;
	}

	return retorna;


}
