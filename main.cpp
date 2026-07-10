#include <iostream>

int main() {
    int numero = 0;
    int soma = 0;
    
    std::cout << "Digite numeros para somar (ou digite -1 para parar):" << std::endl;
    
    // Executa enquanto a condicao de parada (sentinela) nao for atingida
    while (numero != -1) {
        std::cout << "Numero: ";
        std::cin >> numero;
        
        // Garante que o valor -1 nao entre no calculo da soma
        if (numero != -1) {
            soma += numero;
        }
    }
    
    std::cout << "\nSoma total: " << soma << std::endl;
    
    return 0;
}