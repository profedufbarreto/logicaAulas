#include<iostream>
#include<string>

void dizerNome(std::string n, int a){
    std::cout<<"Digite o seu nome: "<<std::endl;
    std::cin>>n;
    std::cout<<"Digite sua idade: "<<std::endl;
    std::cin>>a;
    std::cout<<"Seu nome é: "<<n<<std::endl;
    std::cout<<"Você tem "<<a<<" anos."<<std::endl;
}

int main(){

    std::string nome;
    int age;

    dizerNome(nome, age);

    return 0;
}