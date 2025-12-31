#include<iostream>

void lados(){
    int lado1, lado2, lado3;
}

void lerLados(int &a, int &b, int &c){

    std::cout<<"Digite o lado 1: "<<std::endl;
    std::cin>>a;

    std::cout<<"Digite o lado 2: "<<std::endl;
    std::cin>>b;

    std::cout<<"Digite o lado 3: "<<std::endl;
    std::cin>>c;
}

void verificarTriangulos(){

    int lado1, lado2, lado3;

    lerLados(lado1, lado2, lado3);

    if(lado1 + lado2 <= lado3 || lado2 + lado3 <= lado1 ||
        lado1 + lado3 <= lado2){
            std::cout<<"Isso não é um triângulo!"<<std::endl;
            return;
        }
    

    if(lado1 == lado2 && lado1 == lado3){
        std::cout<<"Todos os lados são iguais."<<std::endl;
        std::cout<<"Triângulo Equilátero."<<std::endl;
    }else if(lado1 != lado2 && lado2 != lado3 && lado1 != lado3){
        std::cout<<"Todos os lados diferentes."<<std::endl;
        std::cout<<"Triângulo Escaleno."<<std::endl;
    }else{
        std::cout<<"Triângulo Isósceles."<<std::endl;
    }
}


int main(){

    verificarTriangulos();

    return 0;
}