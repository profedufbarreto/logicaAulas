import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);

        int[] numeros = { 10, 20, 30, 40, 50 };

        System.out.println("Primeiro elemento: " + numeros[0]);
        System.out.println("Segundo elemento: " + numeros[1]);
        System.out.println("Terceiro elemento: " + numeros[2]);

        teclado.close();
    }
}