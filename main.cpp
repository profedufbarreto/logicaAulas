#include <iostream>
#include <string>
#include <cctype> // Necessário para isupper, islower e isdigit

int avaliarSenha(std::string senha) {
    int score = 0;
    bool temMaiuscula = false;
    bool temMinuscula = false;
    bool temNumero = false;

    // Regra 1: Comprimento
    if (senha.length() >= 8) {
        score += 25;
    }

    // Percorre a string para verificar os tipos de caracteres
    for (int i = 0; i < senha.length(); i++) {
        if (isupper(senha[i])) temMaiuscula = true;
        if (islower(senha[i])) temMinuscula = true;
        if (isdigit(senha[i])) temNumero = true;
    }

    // Regra 2: Maiúsculas
    if (temMaiuscula) score += 25;
    
    // Regra 3: Minúsculas
    if (temMinuscula) score += 25;
    
    // Regra 4: Números
    if (temNumero) score += 25;

    return score;
}

int main() {
    std::string senhaUsuario;
    
    std::cout << "--- ANALISADOR DE SEGURANCA ---" << std::endl;
    std::cout << "Digite sua senha para teste: ";
    std::cin >> senhaUsuario;

    int forca = avaliarSenha(senhaUsuario);

    std::cout << "Pontuacao de seguranca: " << forca << "/100" << std::endl;

    if (forca == 100) {
        std::cout << "Status: SENHA MUITO FORTE!" << std::endl;
    } else if (forca >= 50) {
        std::cout << "Status: Senha aceitavel, mas pode melhorar." << std::endl;
    } else {
        std::cout << "Status: SENHA FRACA! Risco de seguranca." << std::endl;
    }

    return 0;
}