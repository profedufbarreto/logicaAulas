#include<stdio.h>

int main(){

    float distancia, consumo, precoLitro, litros;
    float custoLitro, custoTotal, consumoTotal;

    printf("Qual a distância da viagem: ");
    scanf("%f", &distancia);

    printf("Qual o consumo médio do veículo: ");
    scanf("%f", &consumo);

    printf("Qual valor do litro do combustível: ");
    scanf("%f", &precoLitro);

    litros = distancia / consumo;
    custoTotal = litros * precoLitro;

    if(custoTotal >= 100){
        printf("\nViagem cara! Considere dividir os custos!");
        (distancia >= 100) ? printf("\nViagem longa!") : printf("\nViagem curta!");
        printf("\nViagem custará %.2f\n", custoTotal);
    }else{
        printf("\nO custo está dentro do orçamento!");
        (distancia >= 100) ? printf("\nViagem longa!") : printf("\nViagem curta!");
    }

    return 0;
}