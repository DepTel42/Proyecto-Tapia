#include <stdio.h>


void main(){

    int num1, num2, suma;

    printf("\nEste programa calcula la suma de dos numeros enteros.\n");
    
    printf("\nIntroduce el valor del primer numero:\n");
    scanf("%d",&num1);

    printf("\nIntroduce el valor del segundo numero:\n");
    scanf("%d",&num2);

    suma = num1+num2;

    printf("\nLa suma de %d y %d es %d.\n\n\n", num1,num2,suma);

}
