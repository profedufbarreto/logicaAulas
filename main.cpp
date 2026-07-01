#include <iostream>

int main() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i = 0; i < 10; i++){
        if(numeros[i] % 2 == 0){
            if(numeros[i] == 10){
                std::cout<<numeros[i]<<std::endl;
            }else{
                std::cout<<numeros[i]<<", "<<std::endl;
            }
        }
    }

    
    return 0;
}