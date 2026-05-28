#include <iostream>

int contarDigitos(int n) {
    // PARADA: Se o número chegou a zero, não há mais dígitos para contar
    if (n == 0) return 0;
    
    // RECURSÃO: Soma 1 (pelo dígito atual) e passa o resto do número para a próxima chamada
    return 1 + contarDigitos(n / 10);
}

int main() {
    int numero = 2026;
    std::cout << "O numero " << numero << " tem " << contarDigitos(numero) << " digitos.\n";
    return 0;
}