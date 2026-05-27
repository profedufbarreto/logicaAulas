#include <iostream>

int main() {
    int numeros[5];
    int soma = 0;
    
    for (int i = 0; i < 5; i++) {
        std::cout << "Digite o número " << (i + 1) << ": ";
        std::cin >> numeros[i];
        soma += numeros[i];
    }
    
    std::cout << "Soma: " << soma << std::endl;
    
    return 0;
}