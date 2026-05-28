#include <iostream>

int main() {
    int numeros[5] = {5, 3, 8, 2, 1};
    
    std::cout << "ANTES: ";
    for (int i = 0; i < 5; i++) std::cout << numeros[i] << " ";
    std::cout << "\n\n";
    
    // Bubble sort
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (numeros[j] > numeros[j+1]) {
                // Troca os dois
                int temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
            }
        }
    }
    
    std::cout << "DEPOIS: ";
    for (int i = 0; i < 5; i++) std::cout << numeros[i] << " ";
    std::cout << "\n";
    
    return 0;
}