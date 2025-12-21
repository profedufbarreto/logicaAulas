#include<iostream>

int main(){

    int senhaCorreta = 123;
    int senha;

    while(senha != senhaCorreta){
        std::cout<<"Você errou! Digite tente novamente!"<<std::endl;
        std::cout<<"Digite a sua senha: ";
        std::cin>>senha;
    }


    return 0;
}