#include <iostream>

int main() {
    int numeros[5];
    int soma = 0;
    
    std::cout << "===== 2. SOMA SIMPLES =====" << std::endl;
    std::cout << std::endl;
    
    for (int i = 0; i < 5; i++) {
        std::cout << "Digite o numero " << (i + 1) << ": ";
        std::cin >> numeros[i];
        soma += numeros[i];
    }
    
    std::cout << std::endl;
    std::cout << "Soma total: " << soma << std::endl;
    
    return 0;
}