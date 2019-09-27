/*
*Autor: Eliud Y. Delgado Bedoy
*Fecha: 24/08/2019
*Grupo: 006
*Horario: 7:00am - 9:00am.
*Matricula: 1737570
*/

    /**************************ACTIVIDAD 1******************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	//DECLARACION DE VARIABLES 
	printf("\n\n\t\t\t*********************ACTIVIDAD 1********************* \n\n\n");
	int numeroDeCarros[24], i, R=2;
	printf("\t-Ponga el numero de carros que hay en la Hora: ");//INTROCIMOS LOS NUMEROS DE LOS CARROS 
	for (i=0;i<24;i++){ //UTILIZAMOS CICLO FOR PARA IR AUMENTANDO LA HORA 
		printf(" \n%d:00: ",i );//IMPRESION DE LAS HORAS 
		scanf("%d",& numeroDeCarros[i]);//USAMOS SCAN PARA VALIDAR LOS NUMEROS INTRODUCIDOS
	}
	numeroDeCarros[R]=57;//IGUALAMOS A 57 PARA R=2
	printf("La hora es %d y el numero de carros es %d\n " , R,numeroDeCarros[R]);//IMPRIMIMOS LA HORA  Y NUMEROS DE CARROS
	R=21;//IGUALAMOS A R A LA POSICION 21 
	numeroDeCarros[R]=57;//SE IGUALA R A 57
	printf("La hora es %d y el numero de carros es %d \n ", R,numeroDeCarros[R]);//SE IMPRIME LA HORA Y NUMERO DE CARROS PARA POSICION
	
	
	/**************************ACTIVIDAD 2******************/
	
	//DECLARACION DE VARIABLES 
	printf("\n\n*********************ACTIVIDAD 2********************* \n");
	int A=8, B=4;
	
	R=A/B;//HACEMOS LA OPERACION REQUERIDA 
	printf("La hora es %d:00 y el numero de carros es: %d ", R,numeroDeCarros[R]);//IMPRIMIMOS LA HORA Y NUMERO DE CARROS 
	
	return 0;
}
