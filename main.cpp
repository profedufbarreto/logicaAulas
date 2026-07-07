#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros;
    
    std::cout << "===== 13. BUSCAR ELEMENTO =====" << std::endl;
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
    
    int buscado = 30;
    int posicao = -1;
    
    for (int i = 0; i < numeros.size(); i++) {
        if (numeros[i] == buscado) {
            posicao = i;
            break;
        }
    }
    
    if (posicao != -1) {
        std::cout << "Numero " << buscado << " encontrado na posicao " << posicao << std::endl;
    } else {
        std::cout << "Numero nao encontrado!" << std::endl;
    }
    
    return 0;
}