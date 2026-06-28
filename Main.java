import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        ArrayList<Integer> numeros = new ArrayList<>();

        numeros.add(10);
        numeros.add(20);
        numeros.add(30);
        numeros.add(40);
        numeros.add(50);

        int primeiro = numeros.get(0);
        int segundo = numeros.get(1);
        int ultimo = numeros.get(4);

        System.out.println(numeros);
        System.out.println("Primeiro: " + primeiro);
        System.out.println("Segundo: " + segundo);
        System.out.println("Último: " + ultimo);

    }
}