#include<iostream>
#include<string>

class Pessoa{
    private:
    std::string nome;
    int idade;

    public:
    Pessoa(std::string nome, int idade){
        this->nome = nome;
        this->idade = idade;
    }

    // void cadastrar(){
    //     std::cout<<"Digite o nome: "<<std::endl;
    //     std::cin>>nome;

    //     std::cout<<"Digite a idade: "<<std::endl;
    //     std::cin>>idade;
    // }

    void exibirInfo(){
        std::cout<<"O nome é: "<<nome<<std::endl;
        std::cout<<"Tendo "<<idade<<" anos."<<std::endl;
    }
};

int main(){

    Pessoa p1("Eduardo", 38);
    // p1.cadastrar();
    p1.exibirInfo();

    return 0;
}