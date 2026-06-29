import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        ArrayList<Integer> numeros = new ArrayList<>();

        numeros.add(10);
        numeros.add(20);
        numeros.add(30);
        numeros.add(40);
        numeros.add(50);

        System.out.println("Lista: " + numeros);

        System.out.println("\nUsando FOR tradicional: ");
        for (int i = 0; i < numeros.size(); i++) {
            System.out.println("Posição: " + i + ": " + numeros.get(i));
        }

        System.out.println("Usando FOR melhorado (forEach): ");
        for (int numero : numeros) {
            System.out.println("Número: " + numero);
        }

    }
}