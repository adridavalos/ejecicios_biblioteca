/*
 ============================================================================
 Name        : ejercicioEnClase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Realizar un Menú que muestre las opciones:
        a-Iniciar
        b-Procesar
        c-Finalizar
        d-Salir
Nota:
-Antes de salir preguntar si "esta seguro que desea salir?s/n"
-Si Procesa sin haber Iniciado, debe avisar "Debe Iniciar antes de Procesar" y no deja continuar
-Si se Finaliza antes de Iniciar debe avisar "Debe Iniciar antes de Finalizar" y no deja continuar
-Si se Finaliza antes de Procesar debe avisar "Debe Procesar antes de Finalizar" y no deja continuar
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int main(void) {
	char opcionElegida;
	char seguir;
	int flagUno=0;
	int flagDos =0;


	do{
		opcionElegida = menu();
		switch (opcionElegida) {
		    case 'a':
		    	flagUno=1;
		        break;
		    case 'b':
		    	if(flagUno == 0)
		    	{
		    		printf("\nDebe Iniciar antes de Procesar\n");
		    	}
		    	flagDos =1;
		        break;
		    case 'c':
		    	if(flagUno == 0)
		    	{
		    		printf("\nDebe Iniciar antes de Finalizar\n");
		    	}else if(flagDos == 0)
		    	{
		    		printf("\nDebe Procesar antes de Finalizar\n");
		    	}else
		    	{
		    		printf("Salio con exito");
		    	}

		   		break;
		    case 'd':
		    	printf("\nEsta seguro que desea salir?s/n");
		    	__fpurge(stdin);
				scanf("%c", &seguir);
		   		break;
		    default:
		    	printf("\nOpcion no valida\n");
		        break;
		}


	}while(seguir != 's');

	return EXIT_SUCCESS;
}
