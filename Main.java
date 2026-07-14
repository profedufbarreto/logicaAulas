import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        ArrayList<Integer> numeros = new ArrayList<>();

        numeros.add(10);
        numeros.add(20);
        numeros.add(30);
        numeros.add(40);
        numeros.add(50);

        ArrayList<Integer> copia = new ArrayList<>();

        for (int i = 0; i < numeros.size(); i++) {
            copia.add(numeros.get(i));
            copia.add(numeros.get(i));
        }

        System.out.println("Resultado: " + copia);
    }
}