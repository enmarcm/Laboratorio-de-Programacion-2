//Ejercicio 1 Enmanuel Colina - Sumar con punteros

#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,c;
	int*p1,*p2,*p3;
	
	printf("Ingrese el valor de A: ");
	scanf("%d", &a);
	
	printf("Ingrese el valor de B: ");
	scanf("%d", &b);
	
	c = a+b;
	
	printf("El valor de C es: %d\n", c);
	
	p1=&a;
	p2=&b;
	p3=&c;
	
	printf("La direccion de A es: %d\n", p1);
	printf("La direccion de B es: %d\n", p2);
	printf("La direccion de C es: %d\n", p3);
	
	printf("La suma del Puntero 1 y del Puntero 2 es: %d\n", *p1 + *p2);
	printf("Igualmente el Puntero 3, que contiene la suma de a y b es: %d\n", *p3);
		
	system("pause");
	return 0;
}
