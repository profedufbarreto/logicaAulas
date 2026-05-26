#include <iostream>

int main() {
    int soma = 0;
    
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }
    
    std::cout << "Soma dos pares de 1 a 20: " << soma << std::endl;
    
    return 0;
}