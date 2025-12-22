#include<iostream>

int main(){

    int idade;

    do{
        std::cout<<"Digite a sua idade: "<<std::endl;
        std::cin>>idade;
    }while(idade >=0 && idade <= 110);

    std::cout<<"Digite uma idade válida!"<<std::endl;

    return 0;
}