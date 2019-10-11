/*
*Autor: Eliud Y. Delgado Bedoy
*Fecha: 24/08/2019
*Grupo: 006
*Horario: 7:00am - 9:00am.
*Matricula: 1737570
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 /**************************ACTIVIDAD 1******************/



void contar(char frase[], char diccionario[],int i);
int main ()
{
	printf("\n\n\t\t\t*********************ACTIVIDAD 1********************* \n\n\n");
	
    char diccionario[27] = "abcdefghijklmnopqrstuvwxyz", frase[30];//definimos las varibales 
    int i, caracteres;
    printf("Introduce una Frase: \n");//pedimos que introduzca frase
    fgets(frase, 30, stdin);
    
    caracteres = strlen(frase);
    
    for  (i = 0; i < 25; i++)//usamos ciclo for para contar
        contar(frase, diccionario, i);
        
        
        /**************************ACTIVIDAD 2******************/
        printf("\n\n\t\t\t*********************ACTIVIDAD 2********************* \n\n\n");
 		
        	char palabra[20];//definimos arreglo 
			int a,b,c;
	
	printf("\n\t\t\tPrograma para determinar si una palabra es palindromo");
	printf("\n\nEscribe una palabra o frase: ");
		scanf(" %s", palabra);//validamos el texto
			a=(strlen(palabra))-1;//damos valor a "a" y usamos str para voltear la frase y ver si es palindromo
			c=a;//igualamos
		for(a;a>=0;a--)//usamos ciclo for para contar
			printf("%c\n",palabra[a]);//imprimimos frase
				for(b=0;b<=c;b++)//usamos ciclo for 
					printf("%c",palabra[b]);//imprimimos frase
					a=c;//igualamos
						for(b=0,a;b<=c/2;b++,a--);//usamos ciclo for 
							if(palabra[a]==palabra[b])//igualamos frase para ver si es palindromo 
								printf("\nSi es Palindromo");//si si es imprimimos que es palindromo
							else
								printf("\nNo es Palindromo");//en caso de que no imprimimos lo contrario 
    return 0;
}
 
void contar(char frase[], char diccionario[], int i)
{
    int j, num,contador;
    char letra;
    contador = 0;
    num = strlen(frase);
    
    for (j = 0; j < num-1; j++)//ultiizamos ciclo for 
    {
        if (frase[j] == diccionario[i])//condicionamos 
        {
                contador+=1;
                letra = diccionario[i];
        }
        
            
    }
    if (contador != 0)//si es diferente de 0 imprimimos lo que nos pide
        printf("El numero de letras %c es %d\n", letra, contador);//imprimimos numero de letras y repeticiones de cada una 
        						
}
