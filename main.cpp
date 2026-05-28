#include <iostream>

void contar(int numero) {
    // PARADA — sem isso fica infinito!
    if (numero == 0) {
        std::cout << "PAREI!\n";
        return;
    }
    
    // Imprime o número
    std::cout << numero << "\n";
    
    // Chama a si mesma com um número MENOR
    contar(numero - 1);
}

int main() {
    contar(5);
    return 0;
}