import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);

        int[] numeros = { 10, 20, 30, 40, 50 };
        int limite = 25;

        int contador = 0;

        for (int i = 0; i < numeros.length; i++) {
            if (numeros[i] > limite) {
                contador++;
            }
        }

        System.out.println("Números maiores que " + limite + ": " + contador);

        teclado.close();
    }
}
