/*
 ============================================================================
 Name        : 3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Realizar un programa que permita la carga de temperaturas en Celsius y
Fahrenheit, validando las temperaturas ingresadas estén entre el punto de congelación y de
ebullición del agua para cada tipo de escala. Las validaciones se hacen en una biblioteca. Las
funciones de conversión de Fahrenheit a Celsius y de Celsius a Fahrenheit se hacen en otra.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioInput.h"
#include "conversor.h"

int main(void) {
	float tempIngresada;
	char tipoTemp;
	int retorno;
	float resultado;
	retorno = cargaDeTemperatura(&tempIngresada, &tipoTemp);


	if(retorno == 1)
	{
		if(tipoTemp == 'c')
		{
		    convertirAFahrenheit( &tempIngresada, &resultado);
		    printf("\nLa temperatura en Fahrenheit es: %.2f\n",resultado);
		}else
		{
			convertirACelcius(&tempIngresada, &resultado);
			printf("\nLa temperatura en Celsius es: %.2f\n",resultado);
		}
	}else
	{
		do{
			cargaDeTemperatura(&tempIngresada, &tipoTemp);
		}while(retorno ==0);
	}


	return EXIT_SUCCESS;
}
