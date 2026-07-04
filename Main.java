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

        System.out.println("ArrayList");
        System.out.println("Lista: " + numeros);
        System.out.println("Tamanho: " + numeros.size());

        int maior = numeros.get(0);
        for (int i = 0; i < numeros.size(); i++) {
            if (maior < numeros.get(i)) {
                maior = numeros.get(i);
            }
        }
        System.out.println("\nMaior: " + maior);

        int menor = numeros.get(0);
        for (int i = 0; i < numeros.size(); i++) {
            if (menor > numeros.get(i)) {
                menor = numeros.get(i);
            }
        }
        System.out.println("Menor: " + menor);

        int soma = 0;
        for (int i = 0; i < numeros.size(); i++) {
            soma += numeros.get(i);
        }
        System.out.println("Soma: " + soma);

        double media = (double) soma / numeros.size();
        System.out.println(String.format("Média: %.2f", media));

        int pares = 0;
        for (int i = 0; i < numeros.size(); i++) {
            if (numeros.get(i) % 2 == 0) {
                pares++;
            }
        }
        System.out.println("Pares: " + pares);

        int impares = 0;
        for (int i = 0; i < numeros.size(); i++) {
            if (numeros.get(i) % 2 != 0) {
                impares++;
            }
        }
        System.out.println("Ímpares: " + impares);

        int somaPares = 0;
        for (int i = 0; i < numeros.size(); i++) {
            if (numeros.get(i) % 2 == 0) {
                somaPares += numeros.get(i);
            }
        }
        System.out.println("Soma dos pares: " + somaPares);

        int somaImpares = 0;
        for (int i = 0; i < numeros.size(); i++) {
            if (numeros.get(i) % 2 != 0) {
                somaImpares += numeros.get(i);
            }
        }
        System.out.println("Soma dos ímpares: " + somaImpares);

        int posicao = -1;
        int procurar = 30;
        for (int i = 0; i < numeros.size(); i++) {
            if (numeros.get(i) == procurar) {
                posicao = i;
                break;
            }
        }
        if (posicao != -1) {
            System.out.println("\nProcurando " + procurar + ": Encontrado na posição " + posicao);
        } else {
            System.out.println("\nProcurado " + procurar + ": Não encontrado!");
        }

        System.out.println("\nTodos os elementos: ");
        for (int num : numeros) {
            System.out.println(" - " + num);
        }

    }
}