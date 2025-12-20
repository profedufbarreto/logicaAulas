#include<iostream>

void tabuada(int tab){
    for(int i = 0; i <= 10; i++){
        int resultado = i * tab;
        std::cout<<"O resultado de: "<<tab<<" * "<<i<<" = "<<resultado<<std::endl;
    }
}

int main(){

    int tab, resultado;

    std::cout<<"Digite um valor para tab: ";
    std::cin>>tab;

    tabuada(tab);

    return 0;
}