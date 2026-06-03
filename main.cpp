#include <iostream>
#include <string>

struct Pessoa {
    std::string nome;
    int idade;
    float altura;
};

int main() {
    Pessoa p1 = {"João", 20, 1.75};
    Pessoa p2 = {"Maria", 25, 1.65};
    
    std::cout << p1.nome << " tem " << p1.idade << " anos" << std::endl;
    std::cout << p2.nome << " tem " << p2.idade << " anos" << std::endl;
    
    return 0;
}