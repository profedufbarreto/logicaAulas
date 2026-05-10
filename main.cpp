#include<iostream>
#include<string>

void dizerNome(std::string nome){
    std::cout<<"Olá "<<nome<<std::endl;
}

int main(){

    std::string n;

    std::cout<<"Qual seu nome: ";
    std::cin>>n;

    dizerNome(n);

    return 0;
}