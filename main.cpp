#include <iostream>

int main() {
    int pilha[5];
    int topo = -1;
    int tamanho = 5;
    
    std::cout << "===== PILHA =====" << std::endl;
    std::cout << std::endl;
    
    // EMPILHAR
    pilha[0] = 10;
    pilha[1] = 20;
    pilha[2] = 30;
    topo = 2;
    
    std::cout << "Elementos empilhados: 10, 20, 30" << std::endl;
    std::cout << std::endl;
    
    // DESEMPILHAR
    std::cout << "Desempilhando..." << std::endl;
    while (topo >= 0) {
        std::cout << "Removido: " << pilha[topo] << std::endl;
        topo--;
    }
    
    return 0;
}