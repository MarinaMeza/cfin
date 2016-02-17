#include <Empleado.h>
#include <stdio.h>
#include <string.h>
#define PROGRAMADOR 1
#define BETATESTER 2
#define GERENTE 3
#define ADMINISTRATIVO 4

int empleado_setNombre(empleado *pEmpleado,char *nombre);
int empleado_setEdad(empleado *pEmpleado,int edad);
int empleado_setPuesto(empleado *pEmpleado,int puesto);
int empleado_cargarEmpleado(empleado *pEmpleado,char *nombre,int edad,int puesto);
void empleado_print(empleado *pEmpleado);

//---------------------------------------------------------------------------

int empleado_setNombre(empleado *pEmpleado,char *nombre)
{
	int aux;
	
	aux=strlen(nombre);
	
	if(aux<=3)
	{
		//printf("Error");
		//strcpy(pEmpleado->nombre,nombre);
		return 0;
	}
	else
	{
		strcpy(pEmpleado->nombre,nombre);
		return 1;
	}
}

int empleado_setEdad(empleado *pEmpleado,int edad)
{
	if(edad<18 || edad>70)
	{
		return 0;
	}
	else
	{
		pEmpleado->edad=edad;
		return 1;
	}
}

int empleado_setPuesto(empleado *pEmpleado,int puesto)
{
	if(puesto<1 || puesto>4)
	{
		return 0;
	}
	else
	{
		pEmpleado->puesto=puesto;
		return 1;
	}
}

int empleado_cargarEmpleado(empleado *pEmpleado,char *nombre,int edad,int puesto)
{
	int aux=0;
	while(aux==0)
	{
		aux=empleado_setNombre(pEmpleado,nombre);
		if(aux==0)
		{
			printf("Error. Ingrese el nombre: ");
			fflush(stdin);
			gets(nombre);
		}
	}
	aux=0;
	while(aux==0)
	{
		aux=empleado_setEdad(pEmpleado,edad);
		if(aux==0)
		{
			printf("Error. Ingrese la edad: ");
			scanf("%d",&edad);
		}
	}
	
	aux=0;
	while(aux==0)
	{
		aux=empleado_setPuesto(pEmpleado,puesto);
		if(aux==0)
		{
			printf("Error. Ingrese el puesto: ");
			scanf("%d",&puesto);
		}
	}
}

void empleado_print(empleado *pEmpleado)
{
	printf("%s - %d - %d",pEmpleado->nombre,pEmpleado->edad,pEmpleado->puesto);
}
