#include<iostream>
#include<string>

class Carro{
    private:
    std::string marca;
    std::string modelo;
    int velocidade;

    public:
    Carro(){
        marca = "";
        modelo = "";
        velocidade = 0;
    }

    void cadastrar(){
        std::cout<<"Qual a marca: "<<std::endl;
        std::cin>>marca;

        std::cout<<"Qual o modelo: "<<std::endl;
        std::cin>>modelo;

        std::cout<<"Velocidade máxima: "<<std::endl;
        std::cin>>velocidade;
    }

    void exibirIndo(){
        std::cout<<"A marca é: "<<marca<<std::endl;
        std::cout<<"O modelo é: "<<modelo<<std::endl;
        std::cout<<"A velocidade máxima é: "<<velocidade<<" Km/h"<<std::endl;
    }
};

int main(){

    Carro c1;
    c1.cadastrar();
    c1.exibirIndo();

    return 0;
}