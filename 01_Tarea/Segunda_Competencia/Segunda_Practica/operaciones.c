#include "operaciones.h"

void  suma(int a,int b){
	int resultado=a+b;
	printf("el resultado de la suma es:%d\n",resultado);
}

void resta(int a, int b){
	int resultado=a-b;
	printf("El resultado de la resta es:%d\n",resultado);
}

void multiplicacion(int a, int b){
	int resultado=a*b;
	printf("El resultadode la multiplicion es:%d\n", resultado);
}

void division(int a, int b){
        float resultado;

        if (b != 0){
                resultado = (float)a / (float)b;
                printf("El resultado de la division es: %.2f\n", resultado);
        }else{
                printf("No se puede dividir entre cero\n");
        }
}
