#include <iostream>
#include <string>

int main() {
    std::string palavra;
    
    std::cout << "Digite uma palavra: ";
    std::cin >> palavra;
    
    std::cout << "A palavra digitada possui o caractere inicial: " << palavra[0] << std::endl;
    std::cout << "Resultado: " << palavra << std::endl;
    
    return 0;
}