#include <iostream>
#include <string>

struct Pessoa {
    std::string nome;
    int idade;
    float altura;
};

int main() {
    // Criar uma pessoa
    Pessoa p1;
    
    p1.nome = "João";
    p1.idade = 20;
    p1.altura = 1.75;
    
    // Acessar os dados
    std::cout << "Nome: " << p1.nome << std::endl;
    std::cout << "Idade: " << p1.idade << std::endl;
    std::cout << "Altura: " << p1.altura << std::endl;
    
    return 0;
}