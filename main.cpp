#include <iostream>

int main() {
    int numero;
    int contador = 0;
    
    while (true) {
        std::cout << "Digite um número (0 para parar): ";
        std::cin >> numero;
        
        if (numero == 0) {
            break;
        }
        
        contador++;
    }
    
    std::cout << "Você digitou " << contador << " números!" << std::endl;
    
    return 0;
}
    
