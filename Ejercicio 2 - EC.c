//Ejercicio 2 Enmanuel Colina - Obtener Direccion de Memoria de Diferentes Datos
#include <stdio.h>
#include <stdlib.h>

int main(){
	char a = 'A';
	int b = 1;
	float c = 3.45;
	
	printf("La Direccion en Memoria del Dato %c es %u\n", a,&a);
	printf("La Direccion en Memoria del Dato %d es %u\n", b,&b);
	printf("La Direccion en Memoria del Dato %.2f es %u\n", c,&c);

	system("pause");
	return 0;
}
