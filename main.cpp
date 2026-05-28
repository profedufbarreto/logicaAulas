#include <iostream>

int fibonacci(int n) {
    // PARADAS — bonecas que já sabem a resposta!
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    // Se não é boneca 0 ou 1, pergunta para as duas bonecas menores
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    std::cout << fibonacci(10) << "\n";
    return 0;
}
