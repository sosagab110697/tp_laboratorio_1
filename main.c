#include <stdio.h>
#include <stdlib.h>
#include "Prototipo.h"

//llamada
int main()
{
    //declaracion de variables

    int numero1;
    int numero2;
    float resultado;
    char operacion;


do{
    //aca pidp los dos numeros

    printf("ingrese primer numero:\n");
    scanf("%d",&numero1);
    printf("ingrese segundo numero:\n");
    scanf("%d",&numero2);

    //aca doy a elegir una operacion

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
    case 'a': //suma de los numeros
        resultado = suma(numero1,numero2);
        printf("la suma de %d y %d es: %.2f\n",numero1,numero2,resultado);
        break;

    case 'b': //resta de los numero
        resultado = resta(numero1,numero2);
        printf("la resta de %d y %d es: %.2f\n",numero1,numero2,resultado);
        break;

    case'c': //division de los numeros
        if(numero2 != 0){
        resultado = division(numero1,numero2);
        printf("la division de %d y %d es: %.2f\n",numero1,numero2,resultado);
        }else{
            printf("no se puede dividir por 0: \n");
        }
        break;

    case 'd': //multiplicacion de los numeros
        resultado = multiplicacion(numero1,numero2);
        printf("la multiplicacion de %d y %d es: %.2f\n",numero1,numero2,resultado);
        break;

    case 'e': //factorial de los numeros

        if(numero1 > 0){
        resultado = factorial(numero1);
        printf("el factorial de %d es: %.2f\n",numero1,resultado);
        }else if(numero1 == 0){
        printf("el factorial de 0 es 1");
        }else{
        printf("no se puede hacer factorial de numeros negativos! \n");
        }

        if(numero2 > 0){
        resultado = factorial(numero2);
        printf("el factorial de %d es: %.2f\n",numero2,resultado);
        }else if(numero2 == 0){
        printf("el factorial de 0 es 1");
        }else{
        printf("no se puede hacer factorial de numeros negativos! \n");
        }

}
    system("pause");
    system("cls");

}while(operacion != 's');
    return 0;
}


