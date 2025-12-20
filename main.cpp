#include<iostream>

int somar(int a, int b){
    return a + b;
}

int subtrair(int a, int b){
    return a - b;
}

int multiplicar(int a, int b){
    return a * b;
}

float dividir(int a, int b){
    if(b <= 0){
        std::cout<<"Não pode ser dividido por número menor ou igual que 0!"<<std::endl;
    }else{
        return a / b;
    }
}

int main(){

    int a, b, opcao;
    float resultado;

    std::cout<<"Digite um valor para a: ";
    std::cin>>a;

    std::cout<<"Digite um valor para b: ";
    std::cin>>b;

    std::cout<<"Digite a opção: "<<std::endl;
    std::cout<<"1 - Soma"<<std::endl;
    std::cout<<"2 - Subtração"<<std::endl;
    std::cout<<"3 - Multiplicação"<<std::endl;
    std::cout<<"4 - Divisão"<<std::endl;
    std::cin>>opcao;

    switch(opcao){
        case 1:
        resultado = somar(a, b);
        std::cout<<"O resultado da soma é: "<<resultado<<std::endl;
        break;
        case 2:
        resultado = subtrair(a, b);
        std::cout<<"O resultado da subtração é: "<<resultado<<std::endl;
        break;
        case 3:
        resultado = multiplicar(a, b);
        std::cout<<"O resultado da multiplicação é: "<<resultado<<std::endl;
        break;
        case 4:
        resultado = dividir(a, b);
        std::cout<<"O resultado da divisão é: "<<resultado<<std::endl;
        break;
        default:
        std::cout<<"Você digitou um valor inválido!"<<std::endl;
        break;
    }


    return 0;
}