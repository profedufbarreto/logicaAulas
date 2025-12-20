#include<iostream>

int main(){

    int tab, resultado;

    std::cout<<"Digite um valor para tabuada: ";
    std::cin>>tab;

    for(int i = 0; i <= 10; i++){
        resultado = i * tab;
        std::cout<<"O resultado de: "<<i<<" * "<<tab<<" = "<<resultado<<std::endl;
    }

    return 0;
}