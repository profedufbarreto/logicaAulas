#include <stdio.h>

int somar(int a, int b){
    return a + b;
}

int subtrair(int a, int b){
    return a - b;
}

int multiplicar(int a, int b){
    return a * b;
}

float dividir(float a, float b){
    if(a <= 0){
        printf("\nDigite um valor maior que 0!");
    }else{
        return a / b;
    }
}

int main() {
    
    int num1, num2;
    float resultado;
    int opcao;

    printf("----- Bem-vindos a uma simples calculadora em C: -----");
    printf("\nEscolha um valor para opção: ");
    printf("\n1 - SOMA: ");
    printf("\n2 - Subtração: ");
    printf("\n3 - Multiplicação: ");
    printf("\n4 - Divisão: ");
    scanf("%d", &opcao);

    printf("Digite um valor para num1: ");
    scanf("%d", &num1);

    printf("Digite um valor para num2: ");
    scanf("%d", &num2);

    switch(opcao){
        case 1:
            resultado = somar(num1, num2);
            printf("\nO resultado é %d\n", resultado);
        break;
        case 2:
            resultado = subtrair(num1, num2);
            printf("\nO resultado é %d\n", resultado);
        break;
        case 3:
            resultado = multiplicar(num1, num2);
            printf("\nO resultado é %d\n", resultado);
        break;
        case 4: 
            resultado = dividir(num1, num2);
            printf("\nO resultado é %.2f\n", resultado);
        break;
        default:
            printf("\nVocê digitou um valor inválido!");
        break;
    }

    return 0;
}