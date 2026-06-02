#include <iostream>

int main() {
    int numero = 42;
    int* ptr = &numero;
    
    std::cout << "Antes: " << numero << std::endl;
    
    *ptr = 99;  // Modifica o valor através do ponteiro
    
    std::cout << "Depois: " << numero << std::endl;
    
    return 0;
}