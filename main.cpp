#include <iostream>

int horner(int* coeficientes, int grau, int x) {
    int resultado = coeficientes[grau];
    
    for (int i = grau - 1; i >= 0; i--) {
        resultado = resultado * x + coeficientes[i];
    }
    
    return resultado;
}

int main() {
    // p(x) = 2x^3 + 3x^2 + 4x + 5
    int coef[] = {5, 4, 3, 2};  // índice 0 = constante
    
    std::cout << "p(2) = " << horner(coef, 3, 2) << std::endl;  // 41
    
    return 0;
}