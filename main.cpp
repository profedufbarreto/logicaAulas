#include<iostream>


int main(){

    int num;

    std::cout<<"Digite um número: "<<std::endl;
    std::cin>>num;

    if(num >= 0){
        std::cout<<"Este número é positivo!"<<std::endl;
    }else{
        std::cout<<"Este número é negativo!"<<std::endl;
    }

    return 0;
}