//Escriba una funci�n nombrada funcPotencia() la cual recibir� dos par�metros, primero un
//numero �ENTERO que ser� la base de la potencia, y el segundo par�metro de la funci�n ser� el
//exponente , el valor de retorno ser� la potencia de dicho n�mero.

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
