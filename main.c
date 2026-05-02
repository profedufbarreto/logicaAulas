#include <stdio.h>

int main() {
    
    int num1, num2, soma;

    printf("Digite um valor para num1: ");
    scanf("%d", &num1);

    printf("Digite um valor para num2: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("O resultado de soma é: %d ", soma);

    return 0;
}