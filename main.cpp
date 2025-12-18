#include <iostream>

// Função que apenas exibe o saldo (Passagem por Valor - apenas leitura)
void exibirSaldo(float saldo) {
    std::cout << "\n================================" << std::endl;
    std::cout << "SALDO ATUAL: R$ " << saldo << std::endl;
    std::cout << "================================" << std::endl;
}

// Função para depositar (Passagem por Referência - altera o original)
void depositar(float &saldo, float valor) {
    if (valor > 0) {
        saldo += valor;
        std::cout << "Deposito de R$ " << valor << " realizado com sucesso!" << std::endl;
    } else {
        std::cout << "Valor de deposito invalido!" << std::endl;
    }
}

// Função para sacar (Passagem por Referência e Retorno Booleano)
bool sacar(float &saldo, float valor) {
    if (valor > 0 && valor <= saldo) {
        saldo -= valor;
        return true; // Saque permitido
    }
    return false; // Saldo insuficiente ou valor inválido
}

int main() {
    float meuSaldo = 500.0; // Saldo inicial
    int opcao = 0;
    float valorAux;

    while (opcao != 4) {
        std::cout << "\n--- MENU BANCARIO ---" << std::endl;
        std::cout << "1. Ver Saldo" << std::endl;
        std::cout << "2. Depositar" << std::endl;
        std::cout << "3. Sacar" << std::endl;
        std::cout << "4. Sair" << std::endl;
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                exibirSaldo(meuSaldo);
                break;
            case 2:
                std::cout << "Digite o valor para deposito: ";
                std::cin >> valorAux;
                depositar(meuSaldo, valorAux);
                break;
            case 3:
                std::cout << "Digite o valor para saque: ";
                std::cin >> valorAux;
                if (sacar(meuSaldo, valorAux)) {
                    std::cout << "Saque de R$ " << valorAux << " efetuado!" << std::endl;
                } else {
                    std::cout << "ERRO: Saldo insuficiente ou valor invalido!" << std::endl;
                }
                break;
            case 4:
                std::cout << "Encerrando sistema... Ate logo!" << std::endl;
                break;
            default:
                std::cout << "Opcao invalida!" << std::endl;
        }
    }

    return 0;
}