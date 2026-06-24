public class Main {
    public static void main(String[] args) {

        int[] numeros = { 50, 60, 20, 10, 5, 30 };
        int menor = numeros[0];

        for (int i = 0; i < numeros.length; i++) {
            if (numeros[i] < menor) {
                menor = numeros[i];
            }
        }

        System.out.println("Menor número: " + menor);

    }
}
