#include <iostream>

int buscarProduto(int ids[], int tamanho, int idProcurado) {
    for (int i = 0; i < tamanho; i++) {
        if (ids[i] == idProcurado) {
            return i; // Retorna a posicao (indice)
        }
    }
    return -1; // Indica que nao encontrou
}

int main() {
    int listaIDs[5] = {101, 202, 303, 404, 505};
    int quantidades[5] = {15, 8, 20, 3, 50};
    
    int consulta;
    std::cout << "Digite o ID do produto para consultar estoque: ";
    std::cin >> consulta;

    int indice = buscarProduto(listaIDs, 5, consulta);

    if (indice != -1) {
        std::cout << "Produto encontrado! Quantidade em estoque: " << quantidades[indice] << std::endl;
    } else {
        std::cout << "Erro: Produto com ID " << consulta << " nao cadastrado." << std::endl;
    }

    return 0;
}