#include <iostream>

int main() {
    int numero = 42;
    
    // & significa "endereço de"
    std::cout << "Número: " << numero << std::endl;
    std::cout << "Endereço: " << &numero << std::endl;
    
    return 0;
}