#include <iostream>

int main() {
    std::string time1, time2;
    int gols1, gols2;
    
    std::cout << "===== COMPARADOR DE PLACAR =====" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Time 1: ";
    std::cin >> time1;
    std::cout << "Gols Time 1: ";
    std::cin >> gols1;
    
    std::cout << "Time 2: ";
    std::cin >> time2;
    std::cout << "Gols Time 2: ";
    std::cin >> gols2;
    
    std::cout << std::endl;
    std::cout << "===== RESULTADO =====" << std::endl;
    std::cout << time1 << " " << gols1 << " x " << gols2 << " " << time2 << std::endl;
    std::cout << std::endl;
    
    if (gols1 > gols2) {
        std::cout << time1 << " VENCEU!" << std::endl;
    } else if (gols1 < gols2) {
        std::cout << time2 << " VENCEU!" << std::endl;
    } else {
        std::cout << "EMPATE!" << std::endl;
    }
    
    return 0;
}