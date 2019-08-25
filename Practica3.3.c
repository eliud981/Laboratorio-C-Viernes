/*
*Autor: Eliud Y. Delgado Bedoy
*Fecha: 24/08/2019
*Grupo: 006
*Horario: 7:00am - 9:00am.
*Matricula: 1737570
*/

//EXPRESION 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() //inicio de programa
{
	//Definimos variables de tipo flotante para que el usuario sea libre de poner la cantidad que sea y por si el reultado no es entero 
	float x;
	float resultado;
	//Pedimos que introduzca cualquier valor para nuestra variable 
	printf("Introduzca algun valor para ""x"": ");
	scanf("%f" ,&x);
	
	resultado = 2/3*(x-(1-(x+2)/3))+1; //ponemos la expresion algebraica para dar resultado
	printf("El resultado es: %f", resultado);//impresion del reultado
	
	
	return 0;//fin de programa
}



