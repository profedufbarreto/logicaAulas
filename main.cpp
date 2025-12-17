#include <iostream>

bool ehPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) { // Otimizacao: vai ate a raiz quadrada
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int inicio, fim;
    std::cout << "Digite o inicio e o fim do intervalo: ";
    std::cin >> inicio >> fim;

    std::cout << "Numeros primos encontrados: " << std::endl;
    for (int i = inicio; i <= fim; i++) {
        if (ehPrimo(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}