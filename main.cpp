#include <iostream>
#include <tuple>
#include <string>

int main() {
    // Criando as variáveis temporárias para receber a entrada do usuário
    std::string nome;
    int idade;
    double altura;

    // Solicitando os dados ao usuário
    std::cout << "Digite o seu nome: ";
    std::getline(std::cin, nome); // Usa getline para permitir nomes com espaços

    std::cout << "Digite a sua idade: ";
    std::cin >> idade;

    std::cout << "Digite a sua altura (ex: 1.75): ";
    std::cin >> altura;

    // 1. Criando e populando a tupla com os dados de entrada
    // std::make_tuple cria a tupla automaticamente com os tipos corretos
    std::tuple<std::string, int, double> pessoa = std::make_tuple(nome, idade, altura);

    std::cout << "\n--- Dados salvos na Tupla ---\n";

    // 2. Acessando os dados da tupla usando std::get<índice>(nome_da_tupla)
    // O índice começa em 0 (Nome = 0, Idade = 1, Altura = 2)
    std::cout << "Nome: " << std::get<0>(pessoa) << std::endl;
    std::cout << "Idade: " << std::get<1>(pessoa) << " anos" << std::endl;
    std::cout << "Altura: " << std::get<2>(pessoa) << " m" << std::endl;

    return 0;
}