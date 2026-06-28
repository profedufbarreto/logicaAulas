public class Main {
    public static void main(String[] args) {

        int[] numeros = { 10, 20, 30, 40, 50 };
        int[] copia = new int[numeros.length];

        for (int i = 0; i < numeros.length; i++) {
            copia[i] = numeros[i];
        }
        for (int i = 0; i < numeros.length; i++) {
            System.out.println(copia[i]);
        }

    }
}