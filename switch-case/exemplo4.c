#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int num1, num2;
    int op,result;
    int i=1;
    

    printf("digite um numero\n");
    scanf("%i",&num1);

    printf("digite um numero\n");
    scanf("%i",&num2);

    printf(" \n 1. Soma ");
    printf(" \n 2. Subtracao ");
    printf(" \n 3. Multiplicacao ");
    printf(" \n 4. Divisao ");

    printf(" \n Digite o numero da opcao desejada: ");
    scanf("%d", &op);
 

    switch (op)
    {
    case 1:
        result = num1 + num2;
        printf("a soma e igual: %i",result);
        break;
    case 2:
        result = num1 - num2;
        printf("a subtracao e igual: %i",result);
        break;
    case 3:
        result = num1 * num2;
        printf("a multiplicacao e igual: %i",result);
        break;
    case 4:
        result = num1 / num2;
        printf("a soma e igual: %i",result);
        break; 
    default:
        while (i<=10){
            printf("\nopcao invalida");
            i++;
        }
        break;
    }
}