#include <iostream>
#include <vector> // Importa o equivalente ao ArrayList

int main() {
    // Equivalente a: ArrayList<Integer> numeros = new ArrayList<>();
    std::vector<int> numeros;

    // Equivalente ao numeros.add() do Java:
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);

    // No C++ não dá para printar o vetor inteiro direto com cout << numeros;
    // Precisamos de um loop rápido (foreach) para mostrar os valores:
    std::cout << "[";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << "]" << std::endl;

    return 0;
}