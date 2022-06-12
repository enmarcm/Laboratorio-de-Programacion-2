#include <stdio.h>
#include <math.h>


void segundoGrado(float a, float b, float c);
void volumenEsfera(float r);
void desplazamientoMovil(float d, float v, float t, float a);

float A,B,C,raiz, x1, x2;
float radio, volumen;
float desplazamientoInicial, velocidadInicial, tiempoDesplazamiento, aceleracionDesplazamiento, desplazamientoFinal;
int selector;
int main(){
    printf("Con este programa podra calcular cualquiera de las 3 siguientes operaciones: \n\n");
    printf("1.- Calcular las raices de un polinomio de segundo grado\n");
    printf("2.- Calcular el volumen de una esfera\n");
    printf("3.- Calcular el desplazamiento de un movil en MRUV\n");
    
    scanf("%d", &selector);
    
    switch(selector){
        case 1:
            printf("Ingrese el valor de a:\n");
            scanf("%f", &A);
            printf("Ingrese el valor de b:\n");
            scanf("%f", &B);
            printf("Ingrese el valor de c:\n");
            scanf("%f", &C);
            
            segundoGrado(A, B, C);
            break;
        
        case 2:
            printf("Ingrese el radio de la esfera: \n");
            scanf("%f", &radio);
            
            volumenEsfera(radio);
            break;
            
        case 3:
            printf("Ingrese el desplazamiento inicial: \n");
            scanf("%f", &desplazamientoInicial);
    
            printf("Ingrese la velocidad inicial del desplazamiento: \n");
            scanf("%f", &velocidadInicial);
    
            printf("Ingrese el tiempo del desplazamiento: \n");
            scanf("%f", &tiempoDesplazamiento);
    
            printf("Ingrese la aceleracion: \n");
            scanf("%f", &aceleracionDesplazamiento);
            
            desplazamientoMovil(desplazamientoInicial, velocidadInicial, tiempoDesplazamiento, aceleracionDesplazamiento);
            break;
            
        default:
            printf("No se ingreso un valor aceptado\n");
    }
    
  system("pause");
  return 0;
}

void segundoGrado(float a, float b, float c){
    
  
  raiz = sqrt(pow(b,2)-4*a*c);
  if(a == 0 || raiz < 0){
    printf("El programa no puede ser llevado a cabo\n");
  }else{
     x1 = (-b + raiz)/(2*a);
     x2 = (-b - raiz)/(2*a);
  
    printf("El resultado de la raiz x1 es: %f\n", x1);
    printf("El resultado de la raiz x2 es: %f\n", x2);  
  }
  
}

void volumenEsfera(float r){
    
    if(r <= 0){
        printf("Ocurrio un error, el radio no puede ser menor o igual a 0\n");
    }else{
        volumen =(4*M_PI*pow(r,3)) / (3);
        printf("El volumen de la esfera es %2.f\n", volumen);
    }
    
}

void desplazamientoMovil(float d, float v, float t, float a){
    desplazamientoFinal = d + v + ((a*(t*t))/2 );
    
    printf("El desplazamiento es: %.2f\n", desplazamientoFinal);
    
}

