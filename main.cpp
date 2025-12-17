#include <iostream>

float celsiusParaFahrenheit(float c) {
    return (c * 1.8) + 32;
}

int main() {
    float tempC;
    std::cout << "Digite a temperatura em Celsius: ";
    std::cin >> tempC;

    float resultado = celsiusParaFahrenheit(tempC);
    std::cout << tempC << "C equivale a " << resultado << "F" << std::endl;

    return 0;
}