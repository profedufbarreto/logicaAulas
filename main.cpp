#include<iostream>
#include<string>

void dizerNome(std::string n){
    std::cout<<"Digite o seu nome: "<<std::endl;
    std::cin>>n;
    std::cout<<"Seu nome é: "<<n<<std::endl;
}

int main(){

    std::string nome;

    dizerNome(nome);

    return 0;
}