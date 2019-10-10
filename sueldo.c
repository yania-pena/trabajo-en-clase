/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int edad,genero,tiempot=0,trabaja,puntos,horas
    float sueldo;
	printf("ingrese su edad\n");
	scanf("%d",&edad);
	printf("trabaja en la empresa ?(1=si 2=no)\n");
	scanf("%d",&trabaja);
	if(trabaja==1)
	{
	printf("cuanto gana?");
	scanf("%f",&sueldo);
	printf("ingrese 1 si es genero femenino o 2 si es masculino\n");
	scanf("%d",&genero);
	printf("trabajo mas de un año en la empresa?(1=si y 2=no)");
	scanf("%d",&tiempot);
	if(tiempot==1)
	{
	printf("ingrese cuantos años trabaja en la empresa\n");	
	scanf("%d",&tiempot);
	}
	else
	{
	printf("cuantas horas trabaja en la empresa");
	scanf("%d",&horas);
	}
	if(horas>40)
	{
	sueldo=sueldo+50;
	}
	if(genero==1 && tiempot>30 ||edad>25 && tiempot>30)
	{
		sueldo = sueldo+800;
		
	}
	else
	{
		sueldo = sueldo +100;
	}
	printf("su sueldo actual es = %.2f",sueldo);
	}
	else
	{
		printf("cuanto puntos obtuvo");
		scanf("%d",&puntos);
		if(edad>18 && puntos>85)
		{
			printf("contratado");
		}
			
	}

	
}

