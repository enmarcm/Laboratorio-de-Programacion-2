//Escriba una función nombrada funcPotencia() la cual recibirá dos parámetros, primero un
//numero  ENTERO que será la base de la potencia, y el segundo parámetro de la función será el
//exponente , el valor de retorno será la potencia de dicho número.

#include <iostream>
#include <math.h>

int base, exponente;
int funcPotencia(int num1, int num2);
	
int main(){
int repetir;
do{

	printf("Ingrese la base de la potencia: ");
	scanf("%d", &base);
	
	printf("Ingrese el exponente de la potencia: ");
	scanf("%d", &exponente);
	
	printf("El resultado de la potencia base %d, exponente %d es %d\n\n", base, exponente, funcPotencia(base,exponente) );
	
	printf("1.REPETIR\n2.SALIR\n\n");
	scanf("%d", &repetir);
	
}while(repetir == 1);

	system("pause");
	return 0;
}

int funcPotencia(int num1, int num2){
	int result = pow(num1, num2);
	return result;
}
