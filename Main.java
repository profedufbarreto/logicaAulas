import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        ArrayList<Integer> numeros = new ArrayList<>();

        numeros.add(10);
        numeros.add(20);
        numeros.add(30);
        numeros.add(40);
        numeros.add(50);

        int menor = numeros.get(0);

        for (int i = 0; i < numeros.size(); i++) {
            if (menor > numeros.get(i)) {
                menor = numeros.get(i);
            }
        }

        System.out.println("O menor valor é: " + menor);
    }
}