#include<iostream>

void minhaFuncao(std::string nome){
    std::cout<<"Olá "<<nome<<std::endl;
}

int main(){

    std::string meuNome;

    std::cout<<"Digite seu nome: "<<std::endl;
    std::cin>>meuNome;

    minhaFuncao(meuNome);

    return 0;
}