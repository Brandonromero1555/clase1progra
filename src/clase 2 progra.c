/*
 ============================================================================
 Name        : clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PALABRA 9

int main(void) {

	setbuf (stdout,NULL);
	int a; //numero enteros guarda el dato en la memoria
	float f; //numeros con decimales guarda el dato en la memoria
	char c; // 1 caracter 1 letra 1 simbolo guarda el dato en la memoria

	//funciones

	printf("ingresa tu edad");

	fflush(stdin); //limpiar el buffer antes de leer
	scanf("%d",&a);

    printf("tu edad es:%d",a);

    //BUCLES
    //FOR
    //WHILE

    // GENERALMENTE:
    // SI SE CUANTAS VECES VOY A ITERAR -> FOR
    // SI NO SE -> WHILE
    // PRIMERO QUIERO ITERAR Y DESPUES PREGUNTAR POR LA CONDICION -> DO WHILE

    char respuesta;
    int suma = 0;
    int n;

    do
    {

    	printf("ingresar numero");
    	scanf("%d",&n);

    	suma += n;

		printf("continuar? s/n");
		fflush(stdin);
		scanf("%c",&respuesta);

    }while(respuesta == 's');

    printf("\n la suma es%d",&suma);


	return EXIT_SUCCESS;
}
