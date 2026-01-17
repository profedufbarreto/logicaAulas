#include<iostream>
#include<limits>
#include<string>

int main(){

    int idade;
    std::string nome;

    std::cout<<"Qual sua idade: "<<std::endl;
    std::cin>>idade;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout<<"Qual seu nome: "<<std::endl;
    std::getline(std::cin, nome);

    std::cout<<"Seu nome é: "<<nome<<std::endl;
    std::cout<<"Sua idade é: "<<idade<<std::endl;

    return 0;
}