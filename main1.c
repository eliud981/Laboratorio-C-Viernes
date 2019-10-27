//**************************PRACTICA 11****************************//
/**Autor: Eliud Y. Delgado Bedoy
*Fecha: 24/08/2019
*Grupo: 006
*Horario: 7:00am - 9:00am.
*Matricula: 1737570*/
#include<string.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define NN 5

typedef struct
{
	char *nomest;    //Nombre del estudiante
	int edad;
	char sexo;
	int *notas;
}Estudiante;

typedef struct
{
	int numest;
	Estudiante *estu;
}RegistroNotas;

void main()
{
	char Nombre[30];
	RegistroNotas rest;
	int i,n,sumnot=0,indicemay=0;
	float prom,mayorp=0;
	
	printf("Cuantos Estuadiantes?\n");
	scanf("%d",&rest.numest);
	rest.estu=(Estudiante*)malloc(rest.numest*sizeof(Estudiante));
	if(rest.estu==NULL)
	{
		printf("Insuficiente Espacio de Memoria!!!\n");
		exit(1);
	}
	
	for(i=0; i<rest.numest; i++)
	{
		printf("\n\nNombre Estudiante[%d]:", i+1);
		fflush(stdin);
		gets(Nombre);
		
		rest.estu[i].nomest=(char*)malloc(sizeof(char)*(strlen(Nombre)+1));
		strcpy(rest.estu[i].nomest, Nombre);
		printf("Edad[%d]:",i+1);
		fflush(stdin);
		scanf("%d",&rest.estu[i].edad);
		printf("Sexo[%d]:", i+1);
		fflush(stdin);
		scanf("%c",&rest.estu[i].sexo);
		rest.estu[i].notas=(int*)malloc(NN *sizeof(int));
		if(rest.estu[i].notas==NULL)
		{
			printf("Insuficiente Espacio de Memoria");
			exit(1);
		}
		printf("Las 5 Calificaciones del estudiante %d son:\n", i+1);
		sumnot=0;
		prom=0;
		for(n=0;n<5;n++)
		{
			printf("\tNota[%d]:",n+1);
			scanf("%d",&rest.estu[i].notas[n]);
			sumnot+=rest.estu[i].notas[n];
		}
		prom=sumnot/5;
		if(prom>mayorp)
		{
			indicemay=i;
			mayorp=prom;
		}
	}
	printf("El estudiante con mayor promedio es:%s\n",rest.estu[indicemay].nomest);

}

