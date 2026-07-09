#include <iostream>

int main() {
    int opcao;
    
    std::cout << "Selecione o menu de operacao:\n1 - Iniciar Sistema\n2 - Configurar\n3 - Sair\nEscolha: ";
    std::cin >> opcao;
    
    switch (opcao) {
        case 1:
            std::cout << "Iniciando o sistema..." << std::endl;
            break;
        case 2:
            std::cout << "Abrindo configuracoes..." << std::endl;
            break;
        case 3:
            std::cout << "Saindo... Ate logo!" << std::endl;
            break;
        default:
            std::cout << "Opcao invalida!" << std::endl;
            break;
    }
    
    return 0;
}