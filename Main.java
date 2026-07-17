import java.util.Scanner;

public class Main {
    public static int doble(int num) {
        return num * 2;
    }

    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);

        System.out.println("Digite um número para ter o dobro: ");
        int a = teclado.nextInt();

        System.out.println("O número dobrado é: " + doble(a));

        teclado.close();
    }
}