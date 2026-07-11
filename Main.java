import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        ArrayList<Integer> numeros = new ArrayList<>();

        int posicao = -1;

        numeros.add(10);
        numeros.add(20);
        numeros.add(30);
        numeros.add(40);
        numeros.add(50);

        System.out.println("Antes: " + numeros);

        for (int i = 0; i < numeros.size(); i++) {
            if (numeros.get(i) == 30) {
                numeros.remove(i);
            }
        }

        System.out.println("Depois: " + numeros);
    }
}