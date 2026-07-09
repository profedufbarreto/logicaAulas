#include <iostream>

int main() {
    int idade;
    
    std::cout << "Digite a sua idade: ";
    std::cin >> idade;
    
    if (idade < 18) {
        std::cout << "Menor de idade." << std::endl;
    } else if (idade >= 18 && idade < 60) {
        std::cout << "Maior de idade." << std::endl;
    } else {
        std::cout << "Terceira idade." << std::endl;
    }
    
    return 0;
}