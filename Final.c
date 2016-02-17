#include <stdio.h>
#include <Empleado.c>

int buscarX(char*);

void main(void)
{
	char letras[50];
	int numeros[14]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int aux,i;
	
	printf("Ingrese una palabra: ");
	fflush(stdin);
	gets(letras);
	
	if(buscarX(letras))
	{
		printf("Hay por lo menos una X");
	}
	
	/*for(i=0;i<14;i++)
	{
		numeros[i]=i;
	}*/

	aux=numeros[0];
	numeros[0]=numeros[13];
	numeros[13]=aux;
	
	for(i=0;i<14;i++)
	{
		printf("tercer for %d\n",numeros[i]);
	}
	
	
	

/*	empleado emp;
	
	char nombre[20];
	
	strcpy(nombre,"Cecilia");
	empleado_setNombre(&emp,"Cecilia");
	empleado_setEdad(&emp,31);
	empleado_setPuesto(&emp,ADMINISTRATIVO);
	empleado_cargarEmpleado(&emp,nombre,31,4);
	empleado_print(&emp);
	*/
}

int buscarX(char *letras)
{
	int i;
	for(i=0;i<50;i++)
	{
		if(letras[i]=='x' || letras[i]=='X')
		{
			return 1;
		}
	}
	return 0;
}
