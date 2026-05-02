#include<stdio.h>



int main(){

    int nivelCombustivel;

    printf("Qual nível de combustível: ");
    scanf("%d", &nivelCombustivel);

    if(nivelCombustivel < 0){
        return 1;
    }else{
        if(nivelCombustivel < 10){
            printf("\nALERTA: Nível crítico! Abasteça agora!");
            (nivelCombustivel < 30) ? printf("\nLuz acesa!") : printf("\nLuz apagada!");
        }else if(nivelCombustivel < 30){
            printf("\nAtenção! Combustível na reserva!");
            (nivelCombustivel < 30) ? printf("\nLuz acesa!") : printf("\nLuz apagada!");
        }else{
            printf("\nNível seguro para viajar!");
            (nivelCombustivel < 30) ? printf("\nLuz acesa!") : printf("\nLuz apagada!");
        }
    }

    return 0;
}