#include<iostream>
#include<math.h>

void lerDiametro(double &r){
    
    std::cout<<"Digite o raio do círculo: "<<std::endl;
    std::cin>>r;
    
}

void calcularDiametro(){
    double raio, diametro;

    lerDiametro(raio);

    diametro = pow(raio, 2);

    std::cout<<"O valor do diâmetro é de: "<<diametro<<std::endl;

}

int main(){

    calcularDiametro();

    return 0;
}