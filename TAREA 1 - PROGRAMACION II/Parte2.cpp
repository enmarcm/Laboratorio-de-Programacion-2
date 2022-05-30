//2.-  escriba un programa que mediante el uso de funciones, realice las opresiones aritméticas 
//básicas, suma resta, multiplicación y división de números enteros, se debe pedir al usuario , los
//dos números a ser operados y debe poder elegir el tipo de operación ( +,-,* o /).

#include <iostream>
#include <math.h>

int num1, num2;
int suma(int num1, int num2);
int resta(int num1, int num2);
int multiplicacion(int num1, int num2);
int division(int num1, int num2);

int main(){
int selector;
int repetir;

do{

	printf("Ingrese el valor 1 a operar: ");
	scanf("%d", &num1);
	
	printf("Ingrese el valor 2 a operar: ");
	scanf("%d", &num2);

	printf("Seleccione la operacion a realizar\n");
	printf("1.SUMA\n2.RESTA\n3.MULTIPLICACION\n4.DIVISION\n");
	scanf("%d", &selector);
	
	switch(selector){
		case 1:
			printf("Selecciono suma\n");
			printf("La suma de los valores %d y %d, es %d\n", num1, num2, suma(num1,num2));
			break;
			
		case 2:
			printf("Selecciono resta\n");
			printf("La resta de los valores %d y %d, es %d\n", num1, num2, resta(num1,num2));
			break;
		
		case 3:
			printf("Selecciono multiplicacion\n");
			printf("La multiplicacion de los valores %d y %d, es %d\n", num1, num2, multiplicacion(num1,num2));
			break;
			
		case 4:
			printf("Selecciono division\n");
			printf("La division de los valores %d y %d, es %d\n", num1, num2, division(num1,num2));
			break;
			
		default:
			printf("No ingreso un elemento valido\n\n");
	}
	
printf("1.REPETIR\n2.SALIR\n");
scanf("%d", &repetir);
}while(repetir == 1);
	system("pause");
	return 0;
}

int suma(int num1, int num2){
	return num1+num2;}

int resta(int num1, int num2){
	return num1-num2;}

int multiplicacion(int num1, int num2){
	return num1*num2;}

int division(int num1, int num2){
	return num1/num2;}
