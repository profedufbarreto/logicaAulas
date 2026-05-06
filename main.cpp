#include<iostream>
#include<string>

void fazerCadastro(std::string n, std::string c, std::string da){
    std::cout<<"Digite o seu nome: "<<std::endl;
    std::getline(std::cin, n);
    std::cout<<"Digite o seu CPF: "<<std::endl;
    std::getline(std::cin, c);
    std::cout<<"Digite a sua data de nascimento: "<<std::endl;
    std::getline(std::cin, da);

    std::cout<<"\n\nSeja bem-vindo "<<n<<std::endl;
    std::cout<<"O seu CPF é "<<c<<std::endl;
    std::cout<<"Sua data de nascimento é "<<da<<std::endl;
    std::cout<<"\n\n";
}



int main(){

    std::string nome;
    std::string cpf;
    std::string dataDeNascimento;

    fazerCadastro(nome, cpf, dataDeNascimento);


    return 0;
}