//**********ACTIVIDAD1************
/**Autor: Eliud Y. Delgado Bedoy
*Fecha: 24/08/2019
*Grupo: 006
*Horario: 7:00am - 9:00am.
*Matricula: 1737570*/

//PROGRAMA EN C QUE PODA NOTA REAL DE UNA MATERIA

#include <stdio.h>
#include <conio.h>

int main ()
{
//DECLARACION DE VARIABLES 
float calificacion;

//PEDIR NUMERO A USUARIO
printf("Introduzca la calificación del alumno\n");
scanf("%f", &calificacion);

//INICIO DE ANIDAMIENTO
if(calificacion<0)//Aclarar que no son válidos números negativos 
{
printf("ERROR:Nota Incorrecta\n");//Imprimir Error

}
else
{
if(calificacion<6)//Si calificaciones menor que 6 Alumno reprobado 
{
printf("NO APTO");//Imprimir reprobado
}
else
{
if (calificacion<=10)//Si calificacion menor o igual que 10 Alumno Aprobado
{
printf("APTO");//Imprimir Alumno Aprobado
}
else
{

printf("ERROR:Nota Incorrecta");// Imprimir calificacion no valida 
}
}
}
return 0;
}

//****************ACTIVIDAD2************

//PROGRAMA EN C QUE PIDA POR TECLADO EL NUMERO DEL DIA DE LA SEMANA 

#include <stdio.h>
#include <conio.h>
//INICIO DE PROGRAMA 
int main() { 

//DECLARACION DE VARIABLES 
int dia; 

//IMPRIME INTEODUCIR NUMERO
printf( "\n Introduzca d%ca de la semana: ", 161 ); 
scanf( "%d", &dia ); 

//INICIO DE SWITCH CASE
switch ( dia ) { 
case 1 : printf( "\n Lunes" ); //Caso para lunes 
break; 
case 2 : printf( "\n Martes" ); //Caso para martes
break; 
case 3 : printf( "\n Mi%crcoles", 130 ); //Caso para miércoles 
break; 
case 4 : printf( "\n Jueves" ); //Caso para jueves 
break; 
case 5 : printf( "\n Viernes" ); //caso para viernes
break; 
case 6 : printf( "\n S%cbado", 160 ); //Caso para sabado
break; 
case 7 : printf( "\n Domingo" ); //Caso para domingo
break; 
default : 
printf( "\n ERROR: D%ca incorrecto.", 161 );//Imprimir Error
 } 
return 0;// Fin de programa
 } 

//**********ACTIVIDAD3************
/**Autor: Eliud Y. Delgado Bedoy
*Fecha: 24/08/2019
*Grupo: 006
*Horario: 7:00am - 9:00am.
*Matricula: 1737570*/
/* Programa en C Para crear un menu */

#include <math.h>
#include <stdio.h>

int main()
{
    int n, Opcion;

    do
    {
        printf( "\n   1. Historia de Juego" );
        printf( "\n   2. Instrucciones de Juego" );
        printf( "\n   3. Idioma" );
        printf( "\n   4. Dificulad" );
        printf( "\n   5. Salir." );
        printf( "\n\n   Introduzca opci%cn (1-5): ", 162 );

        scanf( "%d", &Opcion );

        /* Inicio del anidamiento */

        switch ( Opcion )
        {
            case 1: printf( "\n   Usted ha escogido la Opcion #1" );
                    break;

            case 2: printf( "\n Usted ha escogido la Opcion #2 ");
                    break;

            case 3: printf( "\n   Usted ha escogido la Opcion #3 " );
            		break;
            case 4: printf( "\n   Usted ha escogido la Opcion #4 " );
            		break;
            case 5: printf( "\n   Usted ha escogido la Opcion #5 " );
            		break;
         }
         

         /* Fin del anidamiento */

    } while ( Opcion != 5 );

    return 0;
}

