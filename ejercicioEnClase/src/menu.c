/*
 * menu.c
 *
 *  Created on: Sep 8, 2022
 *      Author: advalos
 */
#include <stdio.h>
#include <stdlib.h>


char menu(void)
{
	char retorna;
	printf("\n1. Ingresar una opcion \n"
				"a-Iniciar \n"
				"b-Procesar \n"
				"c-Finalizar\n"
				"d-Salir \n");
		printf("\nIngrese una opcion: ");
		__fpurge(stdin);
		scanf("%c", &retorna);


	return retorna;

}
