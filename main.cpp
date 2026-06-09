#include <iostream>
#include <string>

struct Produto {
    int id;
    std::string nome;
    float preco;
    int quantidade;
};

// Variáveis globais
Produto produtos[100];
int totalProdutos = 0;

// Função para adicionar produto
void adicionarProduto() {
    if (totalProdutos >= 100) {
        std::cout << "Limite de produtos atingido!" << std::endl;
        return;
    }
    
    std::cout << "\n--- Adicionar Produto ---" << std::endl;
    
    std::cout << "ID: ";
    std::cin >> produtos[totalProdutos].id;
    
    std::cin.ignore();  // Limpar buffer
    std::cout << "Nome: ";
    std::getline(std::cin, produtos[totalProdutos].nome);
    
    std::cout << "Preço: ";
    std::cin >> produtos[totalProdutos].preco;
    
    std::cout << "Quantidade: ";
    std::cin >> produtos[totalProdutos].quantidade;
    
    totalProdutos++;
    
    std::cout << "Produto adicionado com sucesso!" << std::endl;
}

// Função para exibir todos os produtos
void exibirProdutos() {
    if (totalProdutos == 0) {
        std::cout << "\nNenhum produto cadastrado!" << std::endl;
        return;
    }
    
    std::cout << "\n--- Lista de Produtos ---" << std::endl;
    std::cout << "ID | Nome | Preço | Quantidade" << std::endl;
    std::cout << "---+------+-------+------------" << std::endl;
    
    for (int i = 0; i < totalProdutos; i++) {
        std::cout << produtos[i].id << " | "
                  << produtos[i].nome << " | R$ "
                  << produtos[i].preco << " | "
                  << produtos[i].quantidade << std::endl;
    }
}

// Função para buscar produto por ID
void buscarProduto() {
    if (totalProdutos == 0) {
        std::cout << "\nNenhum produto cadastrado!" << std::endl;
        return;
    }
    
    int idBuscado;
    std::cout << "\nDigite o ID do produto: ";
    std::cin >> idBuscado;
    
    for (int i = 0; i < totalProdutos; i++) {
        if (produtos[i].id == idBuscado) {
            std::cout << "\n--- Produto Encontrado ---" << std::endl;
            std::cout << "ID: " << produtos[i].id << std::endl;
            std::cout << "Nome: " << produtos[i].nome << std::endl;
            std::cout << "Preço: R$ " << produtos[i].preco << std::endl;
            std::cout << "Quantidade: " << produtos[i].quantidade << std::endl;
            return;
        }
    }
    
    std::cout << "\nProduto não encontrado!" << std::endl;
}

// Função para atualizar quantidade
void atualizarQuantidade() {
    if (totalProdutos == 0) {
        std::cout << "\nNenhum produto cadastrado!" << std::endl;
        return;
    }
    
    int idBuscado;
    std::cout << "\nDigite o ID do produto: ";
    std::cin >> idBuscado;
    
    for (int i = 0; i < totalProdutos; i++) {
        if (produtos[i].id == idBuscado) {
            std::cout << "Quantidade atual: " << produtos[i].quantidade << std::endl;
            std::cout << "Nova quantidade: ";
            std::cin >> produtos[i].quantidade;
            std::cout << "Atualizado com sucesso!" << std::endl;
            return;
        }
    }
    
    std::cout << "\nProduto não encontrado!" << std::endl;
}

// Função para deletar produto
void deletarProduto() {
    if (totalProdutos == 0) {
        std::cout << "\nNenhum produto cadastrado!" << std::endl;
        return;
    }
    
    int idBuscado;
    std::cout << "\nDigite o ID do produto a deletar: ";
    std::cin >> idBuscado;
    
    for (int i = 0; i < totalProdutos; i++) {
        if (produtos[i].id == idBuscado) {
            // Move todos os produtos para cima
            for (int j = i; j < totalProdutos - 1; j++) {
                produtos[j] = produtos[j + 1];
            }
            totalProdutos--;
            std::cout << "Produto deletado com sucesso!" << std::endl;
            return;
        }
    }
    
    std::cout << "\nProduto não encontrado!" << std::endl;
}

// Função para mostrar menu
void exibirMenu() {
    std::cout << "\n========== MENU ==========" << std::endl;
    std::cout << "1. Adicionar produto" << std::endl;
    std::cout << "2. Exibir produtos" << std::endl;
    std::cout << "3. Buscar produto" << std::endl;
    std::cout << "4. Atualizar quantidade" << std::endl;
    std::cout << "5. Deletar produto" << std::endl;
    std::cout << "6. Sair" << std::endl;
    std::cout << "========================" << std::endl;
    std::cout << "Escolha uma opção: ";
}

int main() {
    int opcao;
    
    while (true) {
        exibirMenu();
        std::cin >> opcao;
        
        switch (opcao) {
            case 1:
                adicionarProduto();
                break;
            case 2:
                exibirProdutos();
                break;
            case 3:
                buscarProduto();
                break;
            case 4:
                atualizarQuantidade();
                break;
            case 5:
                deletarProduto();
                break;
            case 6:
                std::cout << "\nAté logo!" << std::endl;
                return 0;
            default:
                std::cout << "\nOpção inválida!" << std::endl;
        }
    }
    
    return 0;
}