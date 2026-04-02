#include<iostream>
#include<string>

int main(){

    std::string nome, sobrenome;

    std::cout<<"Digite seu nome: "<<std::endl;
    std::cin>>nome;

    std::cout<<"Digite seu sobrenome: "<<std::endl;
    std::cin>>sobrenome;

    std::cout<<nome + " " + sobrenome;

    return 0;
}