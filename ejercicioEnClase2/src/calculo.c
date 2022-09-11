/*
 * calculo.c
 *
 *  Created on: Sep 9, 2022
 *      Author: advalos
 */


#include <stdio.h>
#include <stdlib.h>

int dividir(int dividiendo, int divisor, float *resultado)
{
	int retorno =0;
	if(divisor != 0)
	{
		*resultado = (float) dividiendo / divisor;
		retorno = 1;
	}

	return retorno;
}
