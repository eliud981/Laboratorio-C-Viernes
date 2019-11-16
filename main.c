/*
*Autor: Eliud Y. Delgado Bedoy
*Fecha: 24/08/2019
*Grupo: 006
*Horario: 7:00am - 9:00am.
*Matricula: 1737570
*/

#include <stdio.h>
#include <stdlib.h>
#define N 11



/************************************ACTIVIDAD 1***************************************************/
/*void Invertir(char C[N]) //funcion donde vamor a invertir la cadena.
{
	int i,j; //delcaramos las variables.
	char aux;
	for(i=0,j=strlen(C)-2;i<strlen(C)/2;i++,j--) //Usamos el for para invertir.
	{
		aux=C[i];
		C[i]=C[j]; //Aqui le estamos diciendo que el valor que tiene i es la primera  y j la ultima
		C[j]=aux;
	}
}*/


int main()
{
	/*char caracter[N]; //Declaramos el arreglo.
	FILE *A,*B; //hacemos nuestros punteros para los archivos.
	A=fopen("Archivo.txt","r"); //fopen para abrir el archivo (que ya existe) "r" para leer.
    B=fopen("Archivo_alrevez.txt","w"); //Aqui creamos el otro archivo "w" para crear.
	if((A==NULL)||(B==NULL)) //verificamos que este escrito correctamente
		printf("Error");
	else
	{
		fgets(caracter,N,A);// lee del archivo A.
		while(!feof(A)) //feof signigica fin del archivo.
		{
			Invertir(caracter);
			fprintf(B,"%s",caracter);// escribe en el archivo B
			fgets(caracter,N,A);   // con formato.
		}
	}*/
	
	/************************************ACTIVIDAD 2***************************************************/
	FILE *pfp,*fpf; //creamos los punteros a los archivos.
	int a,b; //declaramos las as variables.
	pfp=fopen("Numeros_a_y_b.txt","w"); //abrimos el archivo donde se guardaran nuestras variables
	printf("\n\nIngrese valor para a: "); //pedimos los valores.
	scanf("%d",&a);
	printf("Ingrese valor para b: ");
	scanf("%d",&b);
	fprintf(pfp,"A= %d\nB= %d",a,b); //y los añadimos en el archivo.
	
	pfp=freopen("Numeros_a_y_b.txt","r",pfp);// reabrimos el archivo para leer los valores.
	fclose(pfp); //cerramos el archivo.
	
	fpf=fopen("Suma_de_a_y_b.txt","w"); //Creamos el archivo de la suma.
	fprintf(fpf,"\nLa suma de a y b es = %d",a+b); //imrpimimos los valores de la suma.
	fpf=freopen("Suma_de_a_y_b.txt","r",pfp); //cerramos el archivo.
	fclose(fpf);
	return 0;
}

