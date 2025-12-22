
#include <iostream>

int main() {
    int n = -1;  // começa inválido para entrar no while

    std::cout << "Digite um numero entre 1 e 10: ";
    std::cin >> n;

    // Enquanto for inválido, continue pedindo
    while (n < 1 || n > 10) {
        std::cout << "Valor invalido! Digite novamente (1..10): ";
        std::cin >> n;
    }

    std::cout << "Valor valido: " << n << "\n";
    return 0;
}