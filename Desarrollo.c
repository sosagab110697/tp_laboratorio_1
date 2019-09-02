//aca va el .H

#include "Prototipo.h"
//desarrollo

int suma(int numero1,int numero2){
    int resultado;
    resultado = numero1 + numero2;
    return resultado;
}

int resta(int numero1,int numero2){
    int resultado;
    resultado = numero1 - numero2;
    return resultado;
}

float division (int numero1, int numero2){
    float resultado;
    resultado = (float)numero1 / numero2;
    return resultado;
}

int multiplicacion(int numero1, int numero2){
    int resultado;
    resultado = numero1 * numero2;
    return resultado;
}

int factorial(int numero1){
    int resultado=1;
    int i;

for(i=numero1;i!=0;i--){
    resultado = resultado * i;
}
return(resultado);
}
