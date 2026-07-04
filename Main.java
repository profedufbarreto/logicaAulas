import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        ArrayList<Integer> numeros = new ArrayList<>();

        numeros.add(10);
        numeros.add(20);
        numeros.add(30);
        numeros.add(40);
        numeros.add(50);

        int posicao = -1;
        int procurar = 30;

        for (int i = 0; i < numeros.size(); i++) {
            if (numeros.get(i) == procurar) {
                posicao = i;
                break;
            }
        }
        if (posicao != -1) {
            System.out.println("Encontrado na posição: " + posicao);
        } else {
            System.out.println("Não encontrado!");
        }

    }
}