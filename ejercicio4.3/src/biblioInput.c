/*
 * biblioInput.c
 *
 *  Created on: Sep 8, 2022
 *      Author: advalos
 */

#include <stdio.h>
#include <stdlib.h>

int cargaDeTemperatura(float *temperatura, char *tipo)
{
	int retorno =0;
	if(temperatura != NULL && tipo != NULL)
	{
		printf("\nSeleccione la temperatura: c-(Celsius)/f-(Fahrenheit)");
		__fpurge(stdin);
		scanf("%c", tipo);
		if(*tipo == 'c')
		{
			do{
				printf("\nIngrese la temperatura entre 0-100: ");
				scanf("%f", temperatura);

			}while(*temperatura < 0 || *temperatura > 100);
			retorno =1;

		}else if(*tipo == 'f')
		{
			do{
				printf("\nIngrese la temperatura entre 32-212: ");
				scanf("%f", temperatura);

			}while(*temperatura < 32 || *temperatura > 212);
			retorno =1;
		}
	}

	return retorno;
}
