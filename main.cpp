#include <iostream>

int main() {
    int numeros[5];
    int menor = 0;
    
    std::cout << "===== 4. ENCONTRAR MENOR =====" << std::endl;
    std::cout << std::endl;
    
    for (int i = 0; i < 5; i++) {
        std::cout << "Digite o numero " << (i + 1) << ": ";
        std::cin >> numeros[i];
    }
    
    menor = numeros[0];
    
    for (int i = 1; i < 5; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    
    std::cout << std::endl;
    std::cout << "O menor numero eh: " << menor << std::endl;
    
    return 0;
}