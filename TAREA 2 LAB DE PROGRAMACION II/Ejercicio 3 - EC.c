//Ejercicio 3 Enmanuel Colina - Contar Vocales del Nombre

#include <stdio.h>
#include <stdlib.h>

void solicitarNombre(char *nombre);
int contarVocales(char *nombre);

int main(){
    char nombre[30];
    solicitarNombre(nombre);
    int contVocales=contarVocales(nombre);
    printf("El nombre %s tiene %d vocales\n", nombre,contVocales);
    system("pause");
    return 0;
}


void solicitarNombre(char *nombre){
	printf("Ingresa tu nombre: ");
	fflush(stdin);
	gets(nombre);
}

int contarVocales(char *nombre){
    strupr(nombre);
    
    int contador=0;
    
    while (*nombre){
        switch (*nombre){
            case 'A':contador++;
			break;
			
            case 'E':contador++;
			break;
			
            case 'I':contador++;
			break;
			
            case 'O':contador++;
			break;
			
            case 'U':contador++;
			break;
        }
        nombre++;
    }
    return contador;
}
