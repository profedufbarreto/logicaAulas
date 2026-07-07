#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros;
    
    std::cout << "===== 10. SOMA TOTAL =====" << std::endl;
    std::cout << std::endl;
    
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);
    
    std::cout << "Vector: ";
    for (int i = 0; i < numeros.size(); i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    
    int soma = 0;
    for (int i = 0; i < numeros.size(); i++) {
        soma += numeros[i];
    }
    
    std::cout << "Soma: " << soma << std::endl;
    
    return 0;
}