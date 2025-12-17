#include <iostream>
#include <string>

void encriptar(std::string &texto, int pulo) {
    for (int i = 0; i < texto.length(); i++) {
        // Verifica se e uma letra minuscula ou maiuscula
        if (isalpha(texto[i])) {
            texto[i] = texto[i] + pulo;
        }
    }
}

int main() {
    std::string mensagem;
    int chave;

    std::cout << "Digite uma palavra (sem espacos): ";
    std::cin >> mensagem;
    std::cout << "Digite o valor do deslocamento: ";
    std::cin >> chave;

    encriptar(mensagem, chave);

    std::cout << "Mensagem criptografada: " << mensagem << std::endl;

    return 0;
}