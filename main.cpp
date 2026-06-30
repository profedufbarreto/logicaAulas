#include <iostream>

int main() {
    int numeros[5];
    
    std::cout << "===== 1. LER E EXIBIR =====" << std::endl;
    std::cout << std::endl;
    
    for (int i = 0; i < 5; i++) {
        std::cout << "Digite o numero " << (i + 1) << ": ";
        std::cin >> numeros[i];
    }
    
    std::cout << std::endl;
    std::cout << "Números digitados: ";
    for (int i = 0; i < 5; i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}