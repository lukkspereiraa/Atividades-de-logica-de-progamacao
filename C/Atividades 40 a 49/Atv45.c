int main() {
    float numerador, denominador, resultado;

    printf("Informe o numerador: ");
    scanf("%f", &numerador);

    printf("Informe o denominador (não pode ser zero): ");
    scanf("%f", &denominador);

    while (denominador == 0) {

        printf("O denominador não pode ser zero. Informe um valor diferente: ");
        scanf("%f", &denominador);
    }

    resultado = numerador / denominador;

    printf("Resultado da divisão: %.2f\n", resultado);

    return 0;
}