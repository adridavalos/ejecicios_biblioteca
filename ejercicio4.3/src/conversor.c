/*
 * conversor.c
 *
 *  Created on: Sep 8, 2022
 *      Author: advalos
 */

#include <stdio.h>
#include <stdlib.h>

int convertirACelcius(float *temp, float *result)
{
	int retorno = 0;
	if(temp != NULL && result != NULL){

		*result =(*temp - 32)/1.8;
		retorno =1;
	}
	return retorno;
}
int convertirAFahrenheit(float *temp, float *result)
{
	int retorno = 0;
	if(temp != NULL && result != NULL){

		*result =(*temp * 1.8)+32;
		retorno =1;
	}
	return retorno;
}
