import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        ArrayList<Integer> numeros = new ArrayList<>();

        numeros.add(10);
        numeros.add(20);
        numeros.add(30);
        numeros.add(40);
        numeros.add(50);

        System.out.println("Lista original: " + numeros);
        System.out.println("Tamanho: " + numeros.size());

        System.out.println("\nPrimeiro elemento: " + numeros.get(0));
        System.out.println("Último elemtno: " + numeros.get(numeros.size() - 1));

        System.out.println("\nContém 30? " + numeros.contains(30));
        System.out.println("Contém 99? " + numeros.contains(99));

        numeros.remove(2);
        System.out.println("\nDepois de remover posição 2: " + numeros);

        System.out.println("\nTodos os elementos: ");
        for (int numero : numeros) {
            System.out.println("- " + numero);
        }

    }
}