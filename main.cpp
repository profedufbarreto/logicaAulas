#include <iostream>

int main() {
    int numeros[] = {10, 25, 30, 45, 50, 60, 75, 90};
    int tamanho = 8;
    int buscado;
    
    std::cout << "===== BUSCAR NÚMERO =====" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Array: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    
    std::cout << "Digite o número a buscar: ";
    std::cin >> buscado;
    
    int posicao = -1;
    
    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] == buscado) {
            posicao = i;
            break;
        }
    }
    
    std::cout << std::endl;
    if (posicao != -1) {
        std::cout << "Encontrado na posição " << posicao << std::endl;
    } else {
        std::cout << "Não encontrado!" << std::endl;
    }
    
    return 0;
}