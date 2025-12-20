#include<iostream>

int somar(int a, int b){
    return a + b;
}

int subtrair(int a, int b){
    return a - b;
}

int main(){

    int a, b;
    int opcao, resultado;

    std::cout<<"Digite um valor para a: ";
    std::cin>>a;

    std::cout<<"Digite um valor para b: ";
    std::cin>>b;

    std::cout<<"Digite uma opção: ";
    std::cin>>opcao;

    switch(opcao){
        case 1:
        resultado = somar(a, b);
        std::cout<<"O resultado é: "<<resultado<<std::endl;
        break;
        case 2:
        resultado = subtrair(a, b);
        std::cout<<"O resultado é: "<<resultado<<std::endl;
        break;
        default:
        std::cout<<"Você digitou um valor inválido!";
    }


}