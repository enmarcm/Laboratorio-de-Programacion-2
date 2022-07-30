//Ejercicio 4 Enmanuel Colina - Saber Longitud de Cadena

#include<stdio.h>
#include <stdlib.h>

int main(){
	char cadena[100];
	char *str = cadena;
	
	int i = 0;
	printf("Ingrese una cadena: ");
	gets(cadena);
	
	while(*(str++) != '\0') i++;


    printf("La longitud de %s es de %d caracteres", cadena, i);
    
system("pause");
return 0;
}
