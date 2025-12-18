#include <iostream>

// Função para calcular a média de todos os elementos
float calcularMedia(float notas[], int tam) {
    float soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += notas[i];
    }
    return soma / tam;
}

// Função que conta quantos elementos estão acima de um valor limite
int contarAcimaDaMedia(float notas[], int tam, float media) {
    int contador = 0;
    for (int i = 0; i < tam; i++) {
        if (notas[i] >= media) {
            contador++;
        }
    }
    return contador;
}

int main() {
    const int TAM = 5;
    float notas[TAM];

    std::cout << "--- SISTEMA DE NOTAS ---" << std::endl;

    // Entrada de dados
    for (int i = 0; i < TAM; i++) {
        std::cout << "Digite a nota do aluno " << i + 1 << ": ";
        std::cin >> notas[i];
    }

    // Processamento usando as funções
    float mediaFinal = calcularMedia(notas, TAM);
    int aprovados = contarAcimaDaMedia(notas, TAM, mediaFinal);

    // Saída de dados
    std::cout << "\n--- RELATORIO FINAL ---" << std::endl;
    std::cout << "Media da turma: " << mediaFinal << std::endl;
    std::cout << "Alunos acima ou na media: " << aprovados << std::endl;
    std::cout << "Alunos abaixo da media: " << TAM - aprovados << std::endl;

    return 0;
}