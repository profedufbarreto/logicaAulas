
import java.util.Scanner;

class ContaBancaria{
    private String titular;
    private double saldo;

    public ContaBancaria(String nome, double saldoInicial){
        this.titular = nome;
        this.saldo = saldoInicial;
    }

    public void depositar(){
        double valor;
        System.out.print("Digite o valor a depositar: ");
        Scanner sc = new Scanner(System.in);
        valor = sc.nextDouble();

        if(valor > 0){
            saldo += valor;
            System.out.println("Depósito realizado!");
        }else{
            System.out.println("Valor inválido!");
        }
    }

    public void sacar(){
        double valor;
        System.out.print("Digite o valor a sacar: ");
        Scanner sc = new Scanner(System.in);
        valor = sc.nextDouble();

        if(valor > 0 && valor <= saldo){
            saldo -= valor;
            System.out.println("Saque realizado!");
        }else{
            System.out.println("Saldo insuficiente!");
        }
    }

    public void exibirSaldo(){
        System.out.println(titular + " -- Saldo: R$ " + saldo);
    }
}

public class Main{
    public static void main(String[] args) {
        
        String nome;
        double saldoInicial;

        Scanner sc = new Scanner(System.in);

        System.out.print("Digite aqui o nome do titular: ");
        nome = sc.nextLine();

        System.out.print("Digite aqui o saldo inicial: ");
        saldoInicial = sc.nextDouble();

        ContaBancaria conta = new ContaBancaria(nome, saldoInicial);

        sc.close();

        return;
    }
}