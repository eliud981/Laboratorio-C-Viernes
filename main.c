/*
*Autor: Eliud Y. Delgado Bedoy
*Fecha: 24/08/2019
*Grupo: 006
*Horario: 7:00am - 9:00am.
*Matricula: 1737570
*/
#include <stdio.h>
#include <math.h>
 
int main ()
{
	/**************************ACTIVIDAD 1******************/
	printf("\n\n\t\t\t*********************ACTIVIDAD 1********************* \n\n");
	//declaracion de variables 
  float exponente;
  float potencia;
  printf( "Escriba el exponente: " );//
  scanf( "%f", &exponente);
  printf( "Escriba la potencia: " );
  scanf( "%f", &potencia);
  printf("%f elevado a %f es %lf\n", exponente, potencia, pow (exponente, potencia));//efectuamos operacion necesaria
  
  
  /**************************ACTIVIDAD 2******************/
	printf("\n\n\t\t\t*********************ACTIVIDAD 2********************* \n\n");
  int n,i,c;//declaracion de variables
  printf("\n\nIngrese un numero: ");//introduce numero el usuario
  scanf("%d",&n);//escaneamos el numero
  
  for(i=1;i<=n;i++)//ciclamos 
  {
  	if(n%i==0)c++;//condicion de que si es igual a 0
  }
  if(c==3)//si es igual a 3
  printf("El Numero es primo");//el numero es primo
  else//si no 
  printf("El Numero no es primo");//el numero no es primo 
  
  
}
