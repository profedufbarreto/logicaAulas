#include<iostream>
#include<cstdlib>
#include<ctime>

int gerarDado(){
    return rand() % 6 + 1;
}

int main(){

    srand(time(0));

    std::cout<<gerarDado()<<std::endl;

    return 0;
}