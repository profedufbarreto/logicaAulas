#include <iostream>
#include <string>

bool ehPalindromo(std::string s) {
    int inicio = 0;
    int fim = s.length() - 1;
    
    while (inicio < fim) {
        if (s[inicio] != s[fim]) {
            return false;
        }
        inicio++;
        fim--;
    }
    return true;
}

int main() {
    std::cout << ehPalindromo("arar") << std::endl;
    return 0;
}