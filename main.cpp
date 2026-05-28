#include <iostream>

int main() {
    int fibonacci[10];  // array com 10 posições
    
    fibonacci[0] = 0;  // primeiro número (era 1, agora é 0)
    fibonacci[1] = 1;  // segundo número
    
    // Preenche do terceiro até o décimo
    for (int i = 2; i < 10; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    
    // Imprime todos
    for (int i = 0; i < 10; i++) {
        std::cout << fibonacci[i] << "\n";
    }
    
    return 0;
}