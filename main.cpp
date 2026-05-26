#include <iostream>

int quadrado(int n) {
    return n * n;
}

int main() {
    std::cout << "Quadrado de 5: " << quadrado(5) << std::endl;
    std::cout << "Quadrado de 8: " << quadrado(8) << std::endl;
    std::cout << "Quadrado de 3: " << quadrado(3) << std::endl;
    
    return 0;
}