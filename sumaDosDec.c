
#include <stdio.h>


void main(){

    float num1, num2, suma;

    printf("\nEste programa calcula la suma de dos numeros con parte decimal.\n");
    
    printf("\nIntroduce el valor del primer numero:\n");
    scanf("%f",&num1);

    printf("\nIntroduce el valor del segundo numero:\n");
    scanf("%f",&num2);

    suma = num1+num2;

    printf("\nLa suma de %f y %f es %f.\n\n\n", num1,num2,suma);
}
