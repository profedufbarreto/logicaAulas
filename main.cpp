#include <iostream>
#include <string>

void inverterTexto(std::string &texto) {
    int inicio = 0;
    int fim = texto.length() - 1;

    while (inicio < fim) {
        char temp = texto[inicio];
        texto[inicio] = texto[fim];
        texto[fim] = temp;

        inicio++;
        fim--;
    }
}

int main() {
    std::string palavra;

    std::cout << "Digite uma palavra: ";
    std::cin >> palavra;

    inverterTexto(palavra);

    std::cout << "Invertida: " << palavra << std::endl;

    return 0;
}