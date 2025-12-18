#include <iostream>
#include <cctype> // Biblioteca necessaria

int main() {
    char c1 = 'A';
    char c2 = '7';
    char c3 = 'g';

    std::cout << "Analise de '" << c1 << "':" << std::endl;
    if (isupper(c1)) std::cout << "- E uma letra maiuscula." << std::endl;
    if (isdigit(c1)) std::cout << "- E um numero." << std::endl;

    std::cout << "\nAnalise de '" << c2 << "':" << std::endl;
    if (isupper(c2)) std::cout << "- E uma letra maiuscula." << std::endl;
    if (isdigit(c2)) std::cout << "- E um numero." << std::endl;

    return 0;
}