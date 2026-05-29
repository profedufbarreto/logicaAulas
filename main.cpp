#include <iostream>

int contarDigitos(int n) {
    // PARADA: Se o número chegou a zero, não há mais dígitos para contar
    if (n == 0) return 0;
    
    // RECURSÃO: Soma 1 (pelo dígito atual) e passa o resto do número para a próxima chamada
    return 1 + contarDigitos(n / 10);
}

int main() {
    int numeroUsuario; // 1. Cria a variável vazia para armazenar o valor
    
    std::cout << "Digite um numero inteiro: ";
    std::cin >> numeroUsuario; // 2. Captura o que o usuário digitar no teclado
    
    // Tratamento para o caso específico do número zero (0 tem 1 dígito)
    if (numeroUsuario == 0) {
        std::cout << "O numero 0 tem 1 digito.\n";
    } else {
        // 3. Passa a variável preenchida para a função calcular
        std::cout << "O numero " << numeroUsuario << " tem " << contarDigitos(numeroUsuario) << " digitos.\n";
    }
    
    return 0;
}