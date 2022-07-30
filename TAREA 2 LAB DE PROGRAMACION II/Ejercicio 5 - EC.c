//Ejercicio 5 Enmanuel Colina - Triplicar el valor de un numero

#include <stdio.h>
#include <stdlib.h>

void triplicar(int *x);

int main(){
	int numero;
	
	printf("Ingrese el numero entero a triplicar: ");
	scanf("%d", &numero);
	
	triplicar(&numero);
	
	printf("El numero triplicado es: %d\n", numero);
	
	system("pause");
	return 0;
}

void triplicar(int *x){
	*x = (*x)*3;
}

