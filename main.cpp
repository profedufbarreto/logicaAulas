#include <iostream>

long long calcularFatorial(int n) {
    long long resultado = 1;
    
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    
    return resultado;
}

int main() {
    int numero;
    
    std::cout << "Digite um número para calcular o fatorial: ";
    std::cin >> numero;
    
    if (numero < 0) {
        std::cout << "Erro: fatorial de número negativo não existe!" << std::endl;
    } else {
        long long fatorial = calcularFatorial(numero);
        std::cout << numero << "! = " << fatorial << std::endl;
    }
    
    return 0;
}