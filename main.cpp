#include<iostream>

int main(){

    int numbers[5] = {10, 20, 30, 40, 50};
    int tamanho = std::size(numbers);

    for(int i = 0; i < tamanho; i++){
        std::cout<<numbers[i]<<std::endl;
    }

    return 0;
}