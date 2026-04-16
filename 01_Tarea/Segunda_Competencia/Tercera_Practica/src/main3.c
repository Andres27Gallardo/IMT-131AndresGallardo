#include <stdio.h>
#include "operaciones3.h"
#include "inputs.h"

int main(void){

    int x,z,op;
    char salir;

    /*========================================================
    PRIMERA PARTE
    Solo lee dos numeros y muestra todas las operaciones
    ========================================================*/

    /*
    leer_numeros(&x,&z);

    printf("Suma: %d\n",suma(x,z));
    printf("Resta: %d\n",resta(x,z));
    printf("Multiplicacion: %d\n",multiplicacion(x,z));
    printf("Division: %.2f\n",division(x,z));
    */


    /*========================================================
    SEGUNDA PARTE
    Permite escoger la operacion
    ========================================================*/

    /*
    leer_numeros(&x,&z);

    printf("Seleccione operacion\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    scanf("%d",&op);

    switch(op){

        case 1:
            printf("Resultado: %d\n",suma(x,z));
            break;

        case 2:
            printf("Resultado: %d\n",resta(x,z));
            break;

        case 3:
            printf("Resultado: %d\n",multiplicacion(x,z));
            break;

        case 4:
            printf("Resultado: %.2f\n",division(x,z));
            break;

        default:
            printf("Opcion invalida\n");
    }
    */


    /*========================================================
    TERCERA PARTE
    Bucle infinito (se detiene con CTRL + C)
    ========================================================*/

    /*
    while(1){

        leer_numeros(&x,&z);

        printf("Seleccione operacion\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        scanf("%d",&op);

        switch(op){

            case 1:
                printf("Resultado: %d\n",suma(x,z));
                break;

            case 2:
                printf("Resultado: %d\n",resta(x,z));
                break;

            case 3:
                printf("Resultado: %d\n",multiplicacion(x,z));
                break;

            case 4:
                printf("Resultado: %.2f\n",division(x,z));
                break;

            default:
                printf("Opcion invalida\n");
        }

    }
    */


    /*========================================================
    CUARTA PARTE
    Bucle que termina presionando la tecla 't'
    ========================================================*/

    while(1){

        leer_numeros(&x,&z);

        printf("Seleccione operacion\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        scanf("%d",&op);

        switch(op){

            case 1:
                printf("Resultado: %d\n",suma(x,z));
                break;

            case 2:
                printf("Resultado: %d\n",resta(x,z));
                break;

            case 3:
                printf("Resultado: %d\n",multiplicacion(x,z));
                break;

            case 4:
                printf("Resultado: %.2f\n",division(x,z));
                break;

            default:
                printf("Opcion invalida\n");
        }

        printf("Presione 't' para salir o cualquier otra tecla para continuar: ");
        scanf(" %c",&salir);

        if(salir=='t' || salir=='T'){
            break;
        }
    }

    return 0;
}