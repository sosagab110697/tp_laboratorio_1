#include <stdio.h>
#include <stdlib.h>
#include "Prototipo.h"
//prototipo

int suma(int,int);
int resta(int,int);
float division(int,int);
int multiplicacion(int,int);
int factorial(int);

int main()
{
    int numero1;
    int numero2;
    float resultado;
    char operacion;


do{

    printf("ingrese primer numero:\n");
    scanf("%d",&numero1);
    printf("ingrese segundo numero:\n");
    scanf("%d",&numero2);
    printf("elija una operacion:\n");
    printf("suma (a) \n");
    printf("resta (b) \n");
    printf("division (c) \n");
    printf("multiplicacion (d) \n");
    printf("factorial (e) \n");
    printf("presione la tecla (s) para salir: \n");
    fflush(stdin);
    scanf("%c",&operacion);


switch(operacion)
{
    case 'a':
        resultado = suma(numero1,numero2);
        printf("la suma de %d y %d es: %.2f\n",numero1,numero2,resultado);
        break;

    case 'b':
        resultado = resta(numero1,numero2);
        printf("la resta de %d y %d es: %.2f\n",numero1,numero2,resultado);
        break;

    case'c':
        if(numero2 != 0){
        resultado = division(numero1,numero2);
        printf("la division de %d y %d es: %.2f",numero1,numero2,resultado);
        }else{
            printf("no se puede dividir por 0: \n");
        }
        break;

    case 'd':
        resultado = multiplicacion(numero1,numero2);
        printf("la multiplicacion de %d y %d es: %.2f\n",numero1,numero2,resultado);
        break;

    case 'e':
        if(numero1 > 0){
        resultado = factorial(numero1);
        printf("el factorial de %d es: %.2f\n",numero1,resultado);
        }else if(numero1 == 0){
        printf("el factorial de 0 es 1");
        }else{
        printf("no se puede hacer factorial de numeros negativos!");
        }

        if(numero2 > 0){
        resultado = factorial(numero2);
        printf("el factorial de %d es: %.2f\n",numero2,resultado);
        }else if(numero2 == 0){
        printf("el factorial de 0 es 1");
        }else{
        printf("no se puede hacer factorial de numeros negativos!");
        }

}
    system("pause");
    system("cls");

}while(operacion != 's');
    return 0;
}

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
    int resultado;
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
