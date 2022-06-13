#include <stdio.h>
#include <math.h>

int cantidad;
int valor1= 0;
int valor2 = 1;
int aux = 1;


int main(){
    
    printf("Con este programa podra visualizar la serie de Fibonacci\n");
    printf("Ingrese la cantidad de elementos a ver: \n");
    scanf("%d", &cantidad);
    cantidad = cantidad-2;
    
    printf("%d %d", valor1, valor2);
    
    for(int i = 0; i<cantidad; i++){
        aux = valor1 + valor2;
        printf(" %d", aux);
        valor1 = valor2;
        valor2 = aux;
    }
    
    system("pause");
    return 0;
}
