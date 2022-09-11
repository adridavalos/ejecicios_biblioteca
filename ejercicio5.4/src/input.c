/*
 * input.c
 *
 *  Created on: Sep 11, 2022
 *      Author: advalos
 */


#include <stdio.h>
#include <stdlib.h>

int inputArray(int *len, int *cotaInferior,int *cotaSuperior,int *array)
{
	int retorna = 0;
	int num;
	if(len != NULL && cotaInferior != NULL && cotaSuperior !=NULL && array !=NULL)
	{
		for(int i = 0;i<*len; i++)
		{
			do{
				printf("Ingrese un numero entre -100/100");
				scanf("%d", &num);

			}while(num <*cotaInferior || num > *cotaSuperior);

			array[i] = num;
	}
		retorna = 1;
	}

	return retorna;
}
