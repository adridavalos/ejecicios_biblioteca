/*
 ============================================================================
 Name        : Adriana Maria Davalos Insaurralde
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Realizar un programa en el MAIN que permita calcular y mostrar el factorial de
un número. Utilizar la función de PedirNumero de la ejercitación 3.
Por ejemplo:
5! = 5*4*3*2*1 = 120
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioInput.h"

int main(void)
{
	int numero;
	int i;
	int resp = 1;
	pedirNumero(&numero);

	for(i=0;i<=numero;i++)
	{
		if(i>0)
		{
			resp =i*resp;
		}
	}

	printf("El factorial es:  %d",resp );

	return EXIT_SUCCESS;
}
