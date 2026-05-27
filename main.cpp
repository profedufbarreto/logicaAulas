#include <iostream>
#include <tuple>   // Biblioteca necessária
#include <string>

int main() {
    // 1. Criando uma tupla: id (int), nome (string), nota (double)
    std::tuple<int, std::string, double> aluno(1, "Eduardo", 9.5);

    // 2. Acessando os dados usando std::get<índice>(nome_da_tupla)
    // O índice precisa ser conhecido em tempo de compilação
    std::cout << "ID: " << std::get<0>(aluno) << "\n";
    std::cout << "Nome: " << std::get<1>(aluno) << "\n";
    std::cout << "Nota: " << std::get<2>(aluno) << "\n";


    return 0;
}