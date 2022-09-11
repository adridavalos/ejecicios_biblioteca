/*
 ============================================================================
 Name        : Adriana Maria Davalos Insaurralde
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 5-1: Pedir 5 números enteros, guardarlos en un Array. Calcular la sumatorio
de los mismos y mostrar los impares ingresados.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculo.h"
int main(void){

	int len = 5;
	int numEnteros[len];
	int result =0;
	int retorna;


	retorna = arrayEnteros(&len, numEnteros);
	if(retorna == 1){
		sumaArray(&len,numEnteros, &result);
		printf("\nLa suma es: %d\n", result);
		for(int i =0 ;i<len;i++)
		{
			if(numEnteros[i] % 2 != 0)
			{
				printf("\nNumero impar:%d \n", numEnteros[i]);
			}
		}
	}




	return EXIT_SUCCESS;
}
