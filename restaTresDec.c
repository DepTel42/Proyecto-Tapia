#include <stdio.h>

void main(){

    float num1, num2, num3, resta;

    printf("\nEste programa calcula la resta de tres numeros con parte decimal.\n");
    
    printf("\nIntroduce el valor del primer numero:\n");
    scanf("%f",&num1);

    printf("\nIntroduce el valor del segundo numero:\n");
    scanf("%f",&num2);

    printf("\nIntroduce el valor del tercer numero:\n");
    scanf("%f",&num3);

    resta = num1-num2-num3;

    printf("\nLa resta de %f, %f y %f es %f.\n\n\n", num1,num2,num3,resta);
}
