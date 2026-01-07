#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    double salario, altura;

    printf("Digite o seu nome: ");
    scanf("%s", nome); // Sem o & para strings

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua altura: ");
    scanf("%lf", &altura); // Apenas %lf, sem o ".2"

    printf("Digite o seu salario: ");
    scanf("%lf", &salario); // Apenas %lf

    // No PRINTF você pode usar o %.2
    printf("\n--- Dados Cadastrados ---\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2lf\n", altura);
    printf("Salario: %.2lf\n", salario);

    return 0;
}