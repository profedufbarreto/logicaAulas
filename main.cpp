#include <iostream>

int fibonacci(int n) {
    std::cout << "Calculando fib(" << n << ")\n";
    
    // PARADAS
    if (n == 0) {
        std::cout << "  fib(0) = 0 (PARADA!)\n";
        return 0;
    }
    if (n == 1) {
        std::cout << "  fib(1) = 1 (PARADA!)\n";
        return 1;
    }
    
    // Chama a si mesma com números menores
    std::cout << "  fib(" << n << ") = fib(" << (n-1) << ") + fib(" << (n-2) << ")\n";
    int resultado = fibonacci(n - 1) + fibonacci(n - 2);
    std::cout << "  fib(" << n << ") = " << resultado << "\n";
    return resultado;
}

int main() {
    fibonacci(4);
    return 0;
}