#include <stdio.h>

int main() {

    float nota1, nota2, media;
    char resposta;

    do {

        do {
            printf("Informe a 1ª nota (0 a 10): ");
            scanf("%f", &nota1);

            if (nota1 < 0 || nota1 > 10) {
                printf("Nota inválida. A nota deve estar no intervalo de 0 a 10.\n");
            }
        } while (nota1 < 0 || nota1 > 10);

        do {
            printf("Informe a 2ª nota (0 a 10): ");
            scanf("%f", &nota2);

            if (nota2 < 0 || nota2 > 10) {
                printf("Nota inválida. A nota deve estar no intervalo de 0 a 10.\n");
            }
        } while (nota2 < 0 || nota2 > 10);

        media = (nota1 + nota2) / 2;

        printf("A média do aluno é: %.2f\n", media);

        printf("NOVO CÁLCULO (S/N)? ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    return 0;
}
