/**Autor: Eliud Y. Delgado Bedoy
*Fecha: 24/08/2019
*Grupo: 006
*Horario: 7:00am - 9:00am.
*Matricula: 1737570*/


#include <stdio.h>
#include <stdlib.h>

int main() {
	/**************************ACTIVIDAD 1******************/
	printf("\n\n\t\t\t*********************ACTIVIDAD 1********************* \n\n");
	
	//DECLARACION DE VARIABLES 
	int VEOE[6][10][2],i, j, k;
	for(i=0;i<6;i++){//LLENAMOS ARREGLOS MEDIANTE UN CICLO
		for(j=0;j<10;j++){//ASI MISMO PARA TODAS LAS VARIABLES 
			for(k=0;k<2;k++){//LLENAR ARREGLO CON CICLO 
				scanf("%d",&VEOE[i][j][k]);//ESCANEAMOS LOS NUMEROS 
			}
		}
	}
	VEOE[3][7][1]=4234;//IGUALAMOS ARREGLO A NUMERO PEDIDO
	printf("El empleado numero 3 de la oficina numero 7 del edificio numero 1 ha vendido: %d",VEOE[3][7][1]);//IMPRIMIMOS EL RESULTADO 
	/**************************ACTIVIDAD 2******************/
	printf("\n\n\t\t\t*********************ACTIVIDAD 2********************* \n\n");
	
		
	for(i=0;i<6;i++){//LLENAMOS ARREGLO CON CLICLO FOR 
		for(j=0;j<10;j++){//ASI MISMO PARA TODAS LAS VARIABLES 
			for(k=0;k<2;k++){//LLENAR ARREGLO 
				VEOE[i][j][k]=VEOE[i][j][k]+10;//IGUALAMOS ARREGLOS PERO SUMAMOS 10 
			}
		}
	}
	VEOE[3][7][1]=4234;
	printf("El empleado numero 3 de la oficina numero 7 del edificio numero 1 ha vendido: %d",VEOE[3][7][1]+10);//IMPRIMIMOS EL RESULTADO 
	
	
	
	
	return 0;
}
