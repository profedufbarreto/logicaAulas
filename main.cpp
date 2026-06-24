#include <iostream>

int main() {
    int numeros[] = {15, 8, 25, 3, 42, 12, 7, 30};
    int tamanho = 8;
    
    int maior = numeros[0];
    int menor = numeros[0];
    int posMaior = 0;
    int posMenor = 0;
    
    std::cout << "===== MIN E MAX =====" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Array: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    
    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
            posMaior = i;
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
            posMenor = i;
        }
    }
    
    std::cout << "MAIOR: " << maior << " na posição " << posMaior << std::endl;
    std::cout << "MENOR: " << menor << " na posição " << posMenor << std::endl;
    
    return 0;
}