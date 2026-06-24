import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);

        int[] numeros = { 10, 20, 30, 40, 50 };

        for (int i = 0; i < numeros.length; i++) {
            System.out.println("Posição " + i + " = " + numeros[i]);
        }

        teclado.close();
    }
}