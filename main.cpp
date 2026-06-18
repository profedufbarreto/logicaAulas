#include <iostream>

struct CampeonatoCopa {
    int ano;
    std::string campeao;
};

int main() {
    CampeonatoCopa copas[5] = {
        {2022, "Argentina"},
        {2018, "França"},
        {2014, "Alemanha"},
        {2010, "Espanha"},
        {2006, "Itália"}
    };
    
    std::cout << "===== CAMPEÕES DA COPA =====" << std::endl;
    std::cout << std::endl;
    
    for (int i = 0; i < 5; i++) {
        std::cout << copas[i].ano << " - Campeão: " << copas[i].campeao << std::endl;
    }
    
    return 0;
}