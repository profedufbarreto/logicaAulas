#include<iostream>
#include<string>

int main(){

    std::string nome;

    std::cout<<"Digite seu nome: "<<std::endl;
    std::cin>>nome;

    nome.assign("Senac");

    std::cout<<nome<<std::endl;
    

    return 0;
}