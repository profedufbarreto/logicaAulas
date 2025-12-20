#include<iostream>
#include<string>

void identificacao(std::string nome, int idade){
    std::cout<<nome<<" cadastrado com sucesso!"<<std::endl;
    std::cout<<"Idade: "<<idade<<" anos.";
}

int main(){

    std::string meuNome;
    int minhaIdade;

    std::cout<<"Digite seu nome: ";
    std::cin>>meuNome;

    std::cout<<"Digite sua idade: ";
    std::cin>>minhaIdade;

    identificacao(meuNome, minhaIdade);

    return 0;
}