#include <stdio.h>
#include "operaciones.h"

int main()
{
while (1){
        int operacion, num1, num2;
        printf("|------------------------------------------------------------------------------| \n");
        printf("|                   Catálogo de operaciones disponibles:                       |\n");
        printf("|------------------------------------------------------------------------------| \n");
        printf("|                                                                              |\n");
        printf("|  1 --> Suma de dos números enteros                                           |\n");
        printf("|  2 --> Resta de dos números enteros                                          |\n");
        printf("|  3 --> Multiplicación de dos números enteros                                 |\n");
        printf("|  4 --> División de dos números enteros                                       |\n");
        printf("|  5 --> Raíz cuadrada de un número entero                                     |\n");
        printf("|  6 --> Cálculo del coseno de un número entero por aproximación               |\n");
        printf("|  Cualquier otro número --> Termina la ejecución del programa                 |\n");
        printf("|                                                                              |\n");
        printf("|------------------------------------------------------------------------------| \n");
        printf("\n");
        printf("Ingrese el número de la operación que desea realizar:");

        scanf("%d", &operacion); 

        printf("\n");

        if (operacion == 1){
            printf("Suma: num1 + num2 \n");
            printf("Digite el valor del primer numero a utilizar (num1): ");
            scanf("%d", &num1);
            printf("Digite el valor del segundo numero a utilizar (num2): ");
            scanf("%d", &num2);
            printf("Resultado: %d\n", suma(num1, num2));
            sleep(2);
        }
        if (operacion == 2){
            printf("Resta: num1 - num2 \n");
            printf("Digite el valor del primer numero a utilizar (num1): ");
            scanf("%d", &num1);
            printf("Digite el valor del segundo numero a utilizar (num2): ");
            scanf("%d", &num2);
            printf("Resultado: %d\n", resta(num1, num2));
            sleep(2);
        }
        if (operacion == 3){
            printf("Multiplicación: num1 x num2 \n");
            printf("Digite el valor del primer numero a utilizar (num1): ");
            scanf("%d", &num1);
            printf("Digite el valor del segundo numero a utilizar (num2): ");
            scanf("%d", &num2);
            printf("Resultado: %d\n", multiplicacion(num1, num2));
            sleep(2);
            
        }
        if (operacion == 4){
            printf("División: num1 / num2 \n");
            printf("Digite el valor del primer numero a utilizar (num1): ");
            scanf("%d", &num1);
            printf("Digite el valor del segundo numero a utilizar (num2): ");
            scanf("%d", &num2);
            printf("Resultado: %f\n", division(num1, num2));
            
        }
        if (operacion == 5){
            printf("Raíz cuadrada: \u221Anum \n");
            printf("Digite el valor del numero a utilizar: ");
            scanf("%d", &num1);
            printf("Resultado: %d\n", raiz(num1));
            sleep(2);
            
        }
        if (operacion == 6){
            printf("Coseno por aproximación: num1 = Cantidad de elementos  num2 = Ángulo \n");
            printf("Digite el valor del primer numero a utilizar (num1): ");
            scanf("%d", &num1);
            printf("Digite el valor del segundo numero a utilizar (num2): ");
            scanf("%d", &num2);
            printf("Resultado: %f\n", coseno(num1, num2));
            sleep(2);
        }
        if ((operacion >= 7) || (operacion <= 0)){
            printf("Fin del programa \n");
            break;
        }
    } 
    return 0;
}
