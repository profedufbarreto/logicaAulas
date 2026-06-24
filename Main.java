import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);

        int[] numeros = { 10, 20, 30, 40, 50 };
        int procurado = 30;

        boolean encontrado = false;

        for (int i = 0; i < numeros.length; i++) {
            if (numeros[i] == procurado) {
                encontrado = true;
                break;
            }
        }

        if (encontrado) {
            System.out.println("Número " + procurado + " Encontrado!!");
        } else {
            System.out.println("Número: " + procurado + " Não encontrado!!");
        }

        teclado.close();
    }
}