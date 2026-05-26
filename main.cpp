#include <iostream>

void imprimirAteN(int n) {
    for (int i = 1; i <= n; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    int numero;
    
    std::cout << "Digite um número: ";
    std::cin >> numero;
    
    imprimirAteN(numero);
    
    return 0;
}