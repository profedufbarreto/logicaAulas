public class Main {
    public static void main(String[] args) {

        int[] numeros = { 5, 15, 25, 35, 45, 55, 65 };
        int posicao = -1;
        int num = 35;

        for (int i = 0; i < numeros.length; i++) {
            if (numeros[i] == num) {
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