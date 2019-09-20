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
//INICIO DE PROGRAMA
int main() {
	
	printf("\n\n\t\t\t*********************ACTIVIDAD 1********************* \n\n");
	//DECLARACION DE VARIABLES 
	int i=1, Promedio=0, Calificacion, SumaCalificacion=0;
	//UTILIZAMOS FOR PARA PEDIR 10 VECES UNA CALIFICACION
	for(i;i<=10;i++)
	{
		printf("INGRESE CALIFICACION %d: ", i);//INGRESAMOS LAS VECES NECESARIAS LA CALIFICACION 
		scanf("%d", &Calificacion);
		SumaCalificacion=SumaCalificacion+Calificacion;//IGUALAMOS LA SUMA DE CALIFICACION A LA OPERACION DE SUMA DE CALIFICACION Y CALIFICACION
	}
	Promedio=SumaCalificacion/10;//SACAMOS EL PROMEDIO DE ESAS CALIFICACIONES CON LA OPERACION
	if(Promedio>=7)//USAMOS IF PARA QUE SI CALIF. ES MAYOR QUE 7 IMPRIMA APORBADO
	{
		printf("\nSu calificacion es %d:APROBADO ", Promedio);//IMPRESION APROBADO SI PROMEDIO ES MAYOR QUE 7
	}
	else//SI NO
	{
		printf("\nSu calificacion es %d:REPROBADO ", Promedio);//SI PROM ES MENOR QUE 7 IMPRIMIR REPROBADO
	}
	
	
	
	/**************************ACTIVIDAD 2******************/
	printf("\n\n\t\t\t\t\t\t*********************ACTIVIDAD 2********************* \n\n");
	//DECLARACION DE VARIABLES
	int k=1, Base, Exponente, Potencia=1;
	
	printf("\t\t\t\t\t\tINGRESAR UN NUMERO BASE PARA ELEVAR A N POTENCIA: ");//PEDIMOS NUMERO A POTENCIAR 
	scanf("%d",&Base);
	printf("\n\t\t\t\t\t\tINGRESAR UN NUMERO PARA ELEVAR AL BASE: ");//PEDIMOS NUMERO AL QUE SE VA A ELEVAR 
	scanf("%d",&Exponente);
	
	for(k;k<=Exponente;k++)//UTILIZAMOS CICLO FOR PARA ELEVAR HASTA EL NUMERO DE VECES QUE DIGA EL EXPONENTE 
	{
		Potencia=Potencia*Base;//HACEMOS OPERACION PARA SACAR LA POTENCIA 
	}
		printf("\n\t\t\t\t\t\tEL RESULTADO ES: %d", Potencia);//IMPRIMIR RESULTADO
	
	
	return 0;//FIIIIN DEL PROGRAMA 
}
