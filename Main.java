import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);

        int[] numeros = { 10, 20, 30, 40, 50 };

        for (int num : numeros) {
            System.out.println("Posição: " + num);
        }

        teclado.close();
    }
}