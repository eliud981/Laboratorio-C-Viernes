/**Autor: Eliud Y. Delgado Bedoy
*Fecha: 24/08/2019
*Grupo: 006
*Horario: 7:00am - 9:00am.
*Matricula: 1737570*/


#include <conio.h>
#include <stdio.h>
#include <string.h>

int contar_vocales(char *);

int main() {
	
	/**************************ACTIVIDAD 1******************/
	printf("\n\n\t\t\t*********************ACTIVIDAD 1********************* \n\n");
	//DECLARACION DE VARIABES 
	char cad[300];
	int longi;
	float porc;
	
	printf("Ingrese algun texto!!!!: ");//Ingresamos algun texto para contar las variables 
	gets(cad);
	longi=strlen(cad);//con esto contaremos el numero de caracteres que tiene el texto
	printf("La cantidad de vocales: %d", contar_vocales(cad));//imprimimos numero de vocales
	printf("\nCantidad de caracteres: %d", longi);//imprimimos cantidad de letras 
	getch();
	
	
	/**************************ACTIVIDAD 2******************/
	printf("\n\n\t\t\t*********************ACTIVIDAD 2********************* \n\n");
	
	
	int a,b;//declaramos variables
	a=45; b=15;//damos valor
	int *c,*d;//creamos apuntadores
	c=&a; d=&b;//igualamos
	printf("%d",*c+*d);//despues hacemos suma de apuntadores e imprimimos el valor 
	return 0; 
	

}

	int contar_vocales(char *cad){
	
	//declaremos valor para variables
	int cont=0;
	char *aux=cad;
	
	while(*aux){//con un while identificamos las letras que queremos contar 
		if(*aux=='a'||*aux=='e'||*aux=='i'||*aux=='o'||*aux=='u'||*aux=='A'||*aux=='E'||*aux=='I'||*aux=='O'||*aux=='U')
			cont++;//usamos contador 
			aux++;
	}//funcion 
	return cont;
}
