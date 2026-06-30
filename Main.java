import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        ArrayList<Integer> numeros = new ArrayList<>();

        numeros.add(10);
        numeros.add(21);
        numeros.add(30);
        numeros.add(45);
        numeros.add(50);
        numeros.add(8);
        numeros.add(33);
        numeros.add(14);

        int soma = 0;

        for (int i = 0; i < numeros.size(); i++) {
            if (numeros.get(i) % 2 == 0) {
                soma += numeros.get(i);
            }
        }

        System.out.println("O resultado da soma é: " + soma);

    }
}