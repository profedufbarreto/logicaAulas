#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros;
    int quantidade;
    
    std::cout << "===== 14. ADICIONAR DO USUARIO =====" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Quantos numeros? ";
    std::cin >> quantidade;
    
    std::cout << std::endl;
    
    for (int i = 0; i < quantidade; i++) {
        int numero;
        std::cout << "Digite o numero " << (i + 1) << ": ";
        std::cin >> numero;
        numeros.push_back(numero);
    }
    
    std::cout << std::endl;
    std::cout << "Numeros adicionados: ";
    for (int i = 0; i < numeros.size(); i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}