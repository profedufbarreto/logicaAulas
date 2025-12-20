#include<iostream>

void tabuada(int tab){
    int numeros[11] = {0,1,2,3,4,5,6,7,8,9,10};
    for(int i = 0; i <= 10; i++){
        int resultado = tab * numeros[i];
        std::cout<<"O resultado é: "<<tab<<" * "<<numeros[i]<<" = "<<resultado<<std::endl;
    }
}

int main(){

    int tab;

    std::cout<<"Digite a tabuada desejada: ";
    std::cin>>tab;

    tabuada(tab);



    return 0;
}