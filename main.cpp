#include<iostream>

int main(){

    int tab, resultado;

    int numeros[11] = {0,1,2,3,4,5,6,7,8,9,10};

    std::cout<<"Digite o valor para a tabuada: ";
    std::cin>>tab;

    for(int i = 0; i <= 10; i++){
        resultado = tab * numeros[i];
        std::cout<<"O resultado de: "<<tab<<" * "<<numeros[i]<<" = "<<resultado<<std::endl;
    }



    return 0;
}