import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        ArrayList<Integer> numeros = new ArrayList<>();

        numeros.add(10);
        numeros.add(20);
        numeros.add(30);
        numeros.add(40);
        numeros.add(50);

        int tamanho = numeros.size();

        System.out.println("Lista original: " + numeros);
        System.out.println("Tamanho: " + numeros.size());

        numeros.remove(2);

        System.out.println("\nDepois de remover a posição 2: ");
        System.out.println("Lista: " + numeros);
        System.out.println("Tamanho: " + numeros.size());

    }
}