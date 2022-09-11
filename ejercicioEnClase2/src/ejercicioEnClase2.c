/*
 ============================================================================
 Name        : Adriana Maria Davalos insaurralde
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculo.h"
int main(void)
{
	float resultado;
	int error;

	error = dividir(3, 2 , &resultado);

	if(error  == 1){
		printf("El resultado es: %.2f", resultado);
	}else{
		printf("No se pudo realizar la division");
	}
	return EXIT_SUCCESS;
}
