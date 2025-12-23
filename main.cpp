#include <iostream>
#include<math.h>

int main() {
    
    //Eleve 2, até o número escolhido.
    int num;
    int base = 2;
    int resultado;
    int elevacao[10] = {1,2,3,4,5,6,7,8,9,10};

    std::cout<<"Digite um número: ";
    std::cin>>num;

    for(int i = 1; i <= num; i++){
        resultado = pow(base, elevacao[i-1]);
        std::cout<<"O resultado é: "<<resultado<<std::endl;
    }
    

    return 0;
}