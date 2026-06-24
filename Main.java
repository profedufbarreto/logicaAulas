import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);

        int[] numeros = { 10, 20, 30, 40, 50 };

        System.out.println("Digite o número a ser procurado: ");
        int procurando = teclado.nextInt();

        int posicao = -1;

        for (int i = 0; i < numeros.length; i++) {
            if (numeros[i] == procurando) {
                posicao = i;
                break;
            }
        }

        if (posicao != -1) {
            System.out.println("Encontrado na posição " + posicao);
        } else {
            System.out.println("Não encontrado!");
        }

        teclado.close();
    }
}
