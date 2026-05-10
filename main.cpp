#include<iostream>

int somar(int a, int b){
    return a + b;
}

void exibirResultado(int a, int b){
    std::cout<<somar(a, b)<<std::endl;
}

int main(){

   exibirResultado(3, 2);

    return 0;
}