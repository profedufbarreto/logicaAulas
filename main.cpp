#include<iostream>
#include<string.h>
#include<iomanip>

void gasolina(){
    float litros, total;
    const float valor = 6.09;
    std::cout<<"Quantidade abastecida (litros): "<<std::endl;
    std::cin>>litros;
    total = valor * litros;
    std::cout<<"Seu abastecimento em GASOLINA foi de R$: "<<std::fixed
        <<std::setprecision(2)<<total<<std::endl;
}

void etanol(){
    float litros, total;
    const float valor = 4.79;
    std::cout<<"Quantidade abastecida (litros): "<<std::endl;
    std::cin>>litros;
    total = valor * litros;
    std::cout<<"Seu abastecimento em ETANOL foi de R$: "<<std::fixed
        <<std::setprecision(2)<<total<<std::endl;
}

void diesel(){
    float litros, total;
    const float valor = 5.99;
    std::cout<<"Quantidade abastecida (litros): "<<std::endl;
    std::cin>>litros;
    total = valor * litros;
    std::cout<<"Seu abastecimento em DIESEL foi de R$: "<<std::fixed
        <<std::setprecision(2)<<total<<std::endl;
}

int main(){

    int comb;

    std::cout<<"-------------"<<std::endl;
    std::cout<<"1 - GASOLINA"<<std::endl;
    std::cout<<"2 - ETANOL"<<std::endl;
    std::cout<<"3 - DIESEL"<<std::endl;
    std::cout<<"-------------"<<std::endl;
    std::cin>>comb;

    if(comb == 1){
        gasolina();
    }else if(comb ==2){
        etanol();
    }else if(comb == 3){
        diesel();
    }else{
        std::cout<<"Digitação incorreta!"<<std::endl;
    }

    return 0;
}