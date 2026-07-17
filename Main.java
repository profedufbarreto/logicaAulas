import java.util.Scanner;

public class Main {
    public static int maior(int a, int b, int c) {
        int maiorNumero = a;

        if (b > maiorNumero) {
            maiorNumero = b;
        }
        if (c > maiorNumero) {
            maiorNumero = c;
        }
        return maiorNumero;
    }

    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);

        System.out.println("Digite um valor: ");
        int num1 = teclado.nextInt();

        System.out.println("Digite o segundo valor: ");
        int num2 = teclado.nextInt();

        System.out.println("Digite um terceiro número: ");
        int num3 = teclado.nextInt();

        int resultado = maior(num1, num2, num3);

        System.out.println("O maior é: " + resultado);

        teclado.close();
    }
}