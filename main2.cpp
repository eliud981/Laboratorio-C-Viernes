//**************************PRACTICA 11****************************//
/**Autor: Eliud Y. Delgado Bedoy
*Fecha: 24/08/2019
*Grupo: 006
*Horario: 7:00am - 9:00am.
*Matricula: 1737570*/
#include<string.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct Panda 
	{
		char *nombrep;
		float peso;
		int anyonac;
		char sexo;
	}mip;
	void LeerPanda(mip*p);
	int EdadPanda(mip p);
	int TenerBebes(mip p);
	
	 main()
	{
		mip mp;
		int puede;
		
		LeerPanda(&mp);
		puede=TenerBebes(mp);
		
	if(puede==1)
		printf("El panda %s puede tener bebes\n", mp.nombrep);
	else
		printf("El panda %s no puede tener bebes\n", mp.nombrep);
	}
	
	void LeerPanda(mip*p)
	{
		char nom[35];
		
		printf("El pandase llama: ");
		gets(nom);
		p->nombrep=(char*)malloc(sizeof(char)*strlen(nom)+1);
		if(p==NULL)
		{
			printf("Insuficiente espacio de memoria\n");
			exit(1);
		}
		strcpy(p->nombrep,nom);
		fflush(stdin);
		printf("SUpeso es:");
		scanf("%f",&p->peso);
		fflush(stdin);
		printf("Su Ano de Nacimientoes: ");
		scanf("%d",&p->anyonac);
		fflush(stdin);
		printf("Su sexoes:");
		scanf("%c",&p->sexo);
	}
	
	int EdadPanda(mip p)
	{
		int edadp;
		edadp=2012-p.anyonac;
		return(edadp);
	}
	int TenerBebes(mip p)
	{
		int res, edad;
		edad=EdadPanda(p);
		if(edad>=5&&(p.sexo=='f'||p.sexo=='F'))
			res=1;
		else
			res=0;
		return(res);
	}
	
