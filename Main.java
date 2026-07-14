import java.util.Scanner;

public class Main {
    public static double media(double nota1, double nota2, double nota3) {
        double soma = nota1 + nota2 + nota3;
        return soma / 3;
    }

    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);

        System.out.println("Digite a primeira nota: ");
        double res1 = teclado.nextDouble();
        teclado.nextLine();

        System.out.println("Digite a segunda nota: ");
        double res2 = teclado.nextDouble();
        teclado.nextLine();

        System.out.println("Digite a terceira nota: ");
        double res3 = teclado.nextDouble();
        teclado.nextLine();

        double resultado = media(res1, res2, res3);

        System.out.println("A média final foi: " + resultado);

        teclado.close();
    }
}