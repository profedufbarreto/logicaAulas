import java.util.Scanner;

public class Main {
    public static int somar(int a, int b) {
        return a + b;
    }

    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);

        System.out.println("Digite um valor para num1: ");
        int num1 = teclado.nextInt();

        System.out.println("Digite um valor para num2: ");
        int num2 = teclado.nextInt();

        int resultado = somar(num1, num2);

        System.out.println("O resultado é: " + resultado);

        teclado.close();
    }
}