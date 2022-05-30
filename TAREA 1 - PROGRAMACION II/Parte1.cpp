//1.-Escriba un programa que devuelva la parte decimal de cualquier Número introducido por el usuario.
//Enmanuel Colina - 29.955.728 - Laboratorio de Programacion II

#include <iostream>
#include <math.h>

float decimal;
float mostrarDecimal(float valor);

int main(){
int repetir;
do{
	printf("Ingrese un numero decimal: ");
	scanf("%f", &decimal);
		
	printf("La parte decimal del valor ingresado es: %.2f\n\n", mostrarDecimal(decimal));
	
	printf("1.REPETIR\n2.SALIR\n");
	scanf("%d", &repetir);
	
}while(repetir == 1);
	system("pause");
	return 0;
	
}

float mostrarDecimal(float valor){
	int pEntera = valor;
	float pDecimal = valor - pEntera;
	
	return pDecimal;

}

