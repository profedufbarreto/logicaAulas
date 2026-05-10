#include<iostream>

int somar(int a, int b){
    return a + b;
}

int main(){

    int num1;
    int num2;
    int resultado;

    std::cout<<"Digite um valor para num1: "<<std::endl;
    std::cin>>num1;

    std::cout<<"Digite um valor para num2: "<<std::endl;
    std::cin>>num2;

    resultado = somar(num1, num2);

    std::cout<<"O resultado será de: "<<resultado<<std::endl;

    return 0;
}