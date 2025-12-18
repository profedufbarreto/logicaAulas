#include <iostream>

// Funcao para calcular a media
float calcularMedia(float notas[], int tam) {
    float soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += notas[i];
    }
    return soma / tam;
}

// Funcao para contar alunos acima da media
int contarAcimaDaMedia(float notas[], int tam, float media) {
    int contador = 0;
    for (int i = 0; i < tam; i++) {
        if (notas[i] >= media) {
            contador++;
        }
    }
    return contador;
}

// NOVA FUNCAO: Encontra o maior valor no array
float acharMaiorNota(float notas[], int tam) {
    float maior = notas[0]; // Assume que a primeira e a maior
    for (int i = 1; i < tam; i++) {
        if (notas[i] > maior) {
            maior = notas[i]; // Atualiza se encontrar uma nota maior
        }
    }
    return maior;
}

int main() {
    const int TAM = 5;
    float notas[TAM];

    std::cout << "--- SISTEMA DE NOTAS ---" << std::endl;

    for (int i = 0; i < TAM; i++) {
        std::cout << "Digite a nota do aluno " << i + 1 << ": ";
        std::cin >> notas[i];
    }

    // Chamadas das funcoes
    float mediaFinal = calcularMedia(notas, TAM);
    int aprovados = contarAcimaDaMedia(notas, TAM, mediaFinal);
    float maiorNota = acharMaiorNota(notas, TAM);

    // Relatorio
    std::cout << "\n--- RELATORIO FINAL ---" << std::endl;
    std::cout << "Media da turma: " << mediaFinal << std::endl;
    std::cout << "Alunos acima ou na media: " << aprovados << std::endl;
    std::cout << "A maior nota da turma foi: " << maiorNota << std::endl;

    return 0;
}