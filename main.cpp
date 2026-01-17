#include<iostream>
#include<iomanip>
#include<string>
#include<limits>

void cobrarCombustivel(const std::string& nome, double precoPorLitro){
    double litros;
    std::cout<<"Quantidade abastecida (litros): "<<std::endl;

    if(!(std::cin >> litros)){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout<<"Entrada inválida. Tente novamente. \n";
        return;
    }

    if(litros <= 0.0){
        std::cout<<"Quantidade deve ser maior que zero.\n";
        return;
    }

    double total = precoPorLitro * litros;

    std::cout<<std::fixed<<std::setprecision(2);
    std::cout<<"Seu abastecimento em "<<nome
             <<" foi de R$: "<<total<<'\n';

}

int main(){

    std::cout<<std::fixed<<std::setprecision(2);

    constexpr double precoGasolina = 6.09;
    constexpr double precoEtanol = 4.79;
    constexpr double precoDiesel = 5.99;

    int opcao;

    std::cout<<"------------\n";
    std::cout<<"1 - GASOLINA (R$ " <<precoGasolina<<")\n";
    std::cout<<"2 - ETANOL (R$ "<<precoEtanol<<")\n";
    std::cout<<"3 - DIESEL (R$ "<<precoDiesel<<")\n";
    std::cout<<"------------\n";
    std::cin>>opcao;

    switch(opcao){
        case 1: cobrarCombustivel("GASOLINA", precoGasolina); break;
        case 2: cobrarCombustivel("ETANOL", precoEtanol); break;
        case 3: cobrarCombustivel("DIESEL", precoDiesel); break;
        default: std::cout<<"Opção inválida!\n";
    }

    return 0;
}