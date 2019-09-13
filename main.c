/*
*Autor: Eliud Y. Delgado Bedoy
*Fecha: 24/08/2019
*Grupo: 006
*Horario: 7:00am - 9:00am.
*Matricula: 1737570
*/



/**************************ACTIVIDAD 1******************/
#include<stdio.h>
#include<stdlib.h>
//inicio de programa 
int main ()
{
	//declaracion de variables 
	int n=0, sum=0, i=0;
	char c;
//impresion para pedir un numero
	printf("\n\n*********************ACTIVIDAD 1********************* \n");
	printf("Ingrese un numero entero: \n");
	scanf("%d", &n);
	sum=sum+n;//suma de variables 
		do
		{
			printf("Desea introducir otro numero(s/n)?: \n");//impresion para que usuario diga si o no para poner otro numero 
			fflush(stdin);	
			scanf("%c", &c);
				if(c=='s')//validacion 
				{
					i=1;
					printf("Introduzca otro numero: \n");//volvemos a introducir numero en caso que se rwquiera 
					fflush(stdin);
					scanf("%d", &n);
					sum=sum+n;// suma de numeros introducidos
				}
		else i=0;
		}while(i==1);
			printf("La suma de los numeros es: %d\n\n", sum);//impresion de resultado de suma 
			
			//fin del programa




/**************************ACTIVIDAD 2******************/

	//declaracion de variables 
	int t=0, s=0, j=0;
	char r;
	
	//impresion para que ingrese un numero 
	printf("*********************ACTIVIDAD 2********************* \n");
	printf("Ingrese un numero entero: \n");
	scanf("%d", &t);
	sum=sum+n;
		do
		{
			printf("Desea introducir otro numero(s/n)?: \n");//introducir otro numero en caso de que se requiera 
			fflush(stdin);	
			scanf("%c", &r);
				if(r=='s')//validacion 
				{
					j=1;
					printf("Introduzca otro numero: \n");//s introduce otro numero 
					fflush(stdin);
					scanf("%d", &t);
					if(t>0&&t<100) s=s+t;//rango de numeros que se pueden introducir en este caso solo del mayores que 0 y menores que 100
					else
					{
						j=0;
						printf("Numero no valido\n\n");//imprimir no valido en caso de que el numero sea incorrecto
					}
				}
		else j=0;
		}while(j==1);
			printf("La suma de los numeros es: %d", s);//suma de los numeros introducidos 
		
	//fin del programa 
	return 0;
}
