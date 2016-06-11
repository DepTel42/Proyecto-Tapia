#include <stdio.h>

void main(){

    int num1, num2, num3, resta;

    printf("\nEste programa calcula la resta de tres numeros enteros.\n");
    
    printf("\nIntroduce el valor del primer numero:\n");
    scanf("%d",&num1);

    printf("\nIntroduce el valor del segundo numero:\n");
    scanf("%d",&num2);

    printf("\nIntroduce el valor del tercer numero:\n");
    scanf("%d",&num3);

    resta = num1-num2-num3;

    printf("\nLa resta de %d, %d y %d es %d.\n\n\n", num1,num2,num3,resta);
}
