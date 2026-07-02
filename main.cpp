#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros;
    
    std::cout << "===== 2. TAMANHO DO VECTOR =====" << std::endl;
    std::cout << std::endl;
    
    numeros.push_back(5);
    numeros.push_back(10);
    numeros.push_back(15);
    
    std::cout << "Tamanho do vector: " << numeros.size() << std::endl;
    std::cout << "Elementos: ";
    for (int i = 0; i < numeros.size(); i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}