#include <math.h>
#include "biblioteca.h"

int suma(int num1, int num2){
    return num1 + num2;
}

int resta(int num1, int num2){
    return num1 - num2;
}

int multiplicacion(int num1, int num2){
    return num1 * num2;
}

float division(int num1, int num2){
    if (num2 == 0){
        printf("No se puede realizar división por cero, cambie el valor de num2");
        return 0;
    }
    else {
        return num1 / num2;
    }
}

double raiz(int num){
    return sqrt(num);
}

int aux(int num){
    int res_temp = 1;
    for (int i = 1; i <= num; i++){
        res_temp = res_temp*i;
    }
    return res_temp;
}

int coseno(int cant, int ang){
    float res = 0;
    for (int i = 0; i < cant; i++){
        res = res + pow(-1, i) * pow(ang, 2 * i) / aux(2 * i);
    }
    return res;
 }