#include<iostream>

class ContaBancaria{
    private:
        std::string titular;
        double saldo;

        public:
            ContaBancaria(std::string nome, double saldoInicial = 1000){
                titular = nome;
                saldo = saldoInicial;
            }

            void depositar(){
                double valor;
                std::cout<<"Digite o valor a depositar: "<<std::endl;
                std::cin>>valor;

                if(valor > 0){
                    saldo += valor;
                    std::cout<<"Depósito realizado!"<<std::endl;
                }else{
                    std::cout<<"Valor inválido!"<<std::endl;
                }
            }

            void sacar(){
                double valor;
                std::cout<<"Digite o valor a sacar: ";
                std::cin>>valor;

                if(valor > 0 && valor <= saldo){
                    saldo -= valor;
                    std::cout<<"Saque realizado!"<<std::endl;
                }else{
                    std::cout<<"Saldo insuficiente!"<<std::endl;
                }
            }

            void exibirSaldo(){
                std::cout<<titular<<" ----- Saldo R$: "<<saldo<<std::endl;
            }
};

int main(){

    std::string nome;
    double saldoIncial;

    std::cout<<"Digite o nome do titular: ";
    std::cin>>nome;

    std::cout<<"Digite o saldo inicial: ";
    std::cin>>saldoIncial;

    ContaBancaria conta1(nome, saldoIncial);

    int opcao;

    do{
        std::cout<<"\n ===== MENU ====="<<std::endl;
        std::cout<<"1 - Ver Saldo"<<std::endl;
        std::cout<<"2 - Depositar"<<std::endl;
        std::cout<<"3 - Sacar"<<std::endl;
        std::cout<<"4 - Sair"<<std::endl;
        std::cout<<"Digite uma opção: "<<std::endl;
        std::cin>>opcao;

        switch(opcao){
            case 1: 
            conta1.exibirSaldo();
            break;
            case 2:
            conta1.depositar();
            break;
            case 3:
            conta1.sacar();
            break;
            case 4:
            std::cout<<"Saindo..."<<std::endl;
            break;
            default:
            std::cout<<"Opção inválida!"<<std::endl;
        }
    }while(opcao !=4);
    
    return 0;
}