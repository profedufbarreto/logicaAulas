#include<iostream>

float somar(float a, float b){
    return a + b;
}

float subtrair(float a, float b){
    return a - b;
}

float multiplicar(float a, float b){
    return a * b;
}

float dividir(float a, float b){
    if (b < 0){
        std::cout<<"O valor deve ser maior que 0!"<<std::endl;
    }else{
        return a / b;
    }
}

float coletarNumeros(float a, float b){
    std::cout<<"Digite um valor para a: "<<std::endl;
    std::cin>>a;

    std::cout<<"Digite um valor para b: "<<std::endl;
    std::cin>>b;
}

void exibirResultado(float a, float b){
    int op;
    std::cout<<"Digite uma opção: "<<std::endl;
    std::cout<<"1 - Somar";
    std::cout<<"2 - Subtrair";
    std::cout<<"3 - Multiplicar";
    std::cout<<"4 - Dividir";
    std::cin>>op;

    coletarNumeros(a, b);

    switch(op){
        case 1:
        std::cout<<"O resultado é: "<<somar(a, b)<<somar(a, b)<<std::endl;
        break;
        case 2: 
        std::cout<<"O resultado é: "<<subtrair(a, b)<<std::endl;
        break;
        case 3:
        std::cout<<"O resultado é: "<<multiplicar(a, b)<<std::endl;
        break;
        case 4:
        std::cout<<"O resultado é: "<<dividir(a, b)<<std::endl;
        break;
        default:
        std::cout<<"Você digitou um valor inválido!"<<std::endl;
    }
}

int main(){

    float num1, num2;
    exibirResultado(num1, num2);

    return 0;
}