import java.util.Scanner;

public class Main {
    public static boolean positivo(int num) {
        boolean pos = false;

        if (num >= 0) {
            pos = true;
        }
        return pos;
    }

    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);

        System.out.println("Digite um número: ");
        int num1 = teclado.nextInt();

        boolean resultado = positivo(num1);

        System.out.println("O número é positivo? " + resultado);

        teclado.close();
    }
}