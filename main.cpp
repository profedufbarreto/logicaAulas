#include <iostream>

struct Aposta {
    std::string time;
    int valor;
    int odd;
};

int main() {
    std::cout << "===== CALCULADORA DE APOSTAS =====" << std::endl;
    std::cout << std::endl;
    
    Aposta aposta;
    
    std::cout << "Time: ";
    std::cin >> aposta.time;
    
    std::cout << "Valor da aposta (R$): ";
    std::cin >> aposta.valor;
    
    std::cout << "Odd (multiplicador): ";
    std::cin >> aposta.odd;
    
    int ganho = aposta.valor * aposta.odd;
    int lucro = ganho - aposta.valor;
    
    std::cout << std::endl;
    std::cout << "===== RESULTADO =====" << std::endl;
    std::cout << "Você apostou R$ " << aposta.valor << " em " << aposta.time << std::endl;
    std::cout << "Se acertar, você ganha: R$ " << ganho << std::endl;
    std::cout << "Lucro: R$ " << lucro << std::endl;
    
    return 0;
}