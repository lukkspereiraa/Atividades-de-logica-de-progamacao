#include <stdio.h>

int main() {
    

    float numerador, denominador, resultado;

    printf("Informe o numerador: ");
    scanf("%f", &numerador);

    denominador = 0;


    do {

        printf("Informe o denominador (não pode ser zero): ");
        scanf("%f", &denominador);


        if (denominador == 0) {
            printf("O denominador não pode ser zero. Informe um valor diferente.\n");
        }

    } while (denominador == 0);


    resultado = numerador / denominador;


    printf("Resultado da divisão: %.2f\n", resultado);

    return 0;
}