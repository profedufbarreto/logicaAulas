#include<iostream>

int main(){

    int var;

    std::cout<<"Digite um valor para var: ";
    std::cin>>var;

    for(int i = 0; i <= var; i++){
        std::cout<<"Eu estou aprendendo a fazer loopings!"<<std::endl;
        i++;
    }

    return 0;
}