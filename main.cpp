#include<iostream>
#include<string>

class Carro{ //classe
    private:
    std::string marca; //atributo
    std::string modelo; //atributo
    int velocidade; //atributo

    public:
    Carro(std::string marca, std::string modelo, int velocidade){ //construtor
        this->marca = marca;
        this->modelo = modelo;
        this->velocidade = velocidade;
    }

    void cadastrar(){ //método
        std::cout<<"Qual a marca: "<<std::endl;
        std::cin>>marca;

        std::cout<<"Qual o modelo: "<<std::endl;
        std::cin>>modelo;

        std::cout<<"Velocidade máxima: "<<std::endl;
        std::cin>>velocidade;
    }

    void exibirInfo(){ //método
        std::cout<<"A marca é: "<<marca<<std::endl;
        std::cout<<"O modelo é: "<<modelo<<std::endl;
        std::cout<<"A velocidade máxima é: "<<velocidade<<" Km/h"<<std::endl;
    }
};

int main(){

    Carro c1("Toyota", "Hillux", 140);
    Carro c2("Mitsubishi", "L200 Triton", 138);


    // c1.cadastrar();
    // c2.cadastrar();
    c1.exibirInfo();
    c2.exibirInfo();

    return 0;
}