#include<iostream>

int main(){

    int lado1, lado2, lado3;

    std::cout<<"Digite o lado 1: "<<std::endl;
    std::cin>>lado1;

    std::cout<<"Digite o lado 2: "<<std::endl;
    std::cin>>lado2;

    std::cout<<"Digite o lado 3: "<<std::endl;
    std::cin>>lado3;

    if(lado1 == lado2 && lado1 == lado3){
        std::cout<<"Todos os lados são iguais."<<std::endl;
        std::cout<<"Triângulo Equilátero!"<<std::endl;
    }else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
        std::cout<<"Apenas dois lados iguais."<<std::endl;
        std::cout<<"Triângulo Isósceles."<<std::endl;
    }else if(lado1 != lado2 && lado1 != lado3){
        std::cout<<"Todos os lados são diferentes."<<std::endl;
        std::cout<<"Triângulo Escaleno."<<std::endl;
    }else{
        std::cout<<"Isso não é um triângulo!"<<std::endl;
    }

    return 0;
}