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

        boolean tem10 = numeros.contains(10);
        boolean tem25 = numeros.contains(25);
        boolean tem50 = numeros.contains(50);

        System.out.println("\nContém 10? " + tem10);
        System.out.println("Contém 25? " + tem25);
        System.out.println("Contém 50?" + tem50);

    }
}