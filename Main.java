public class Main {
    public static void main(String[] args) {

        int[] numeros = { 10, 21, 30, 45, 50 };
        int impares = 0;

        for (int i = 0; i < numeros.length; i++) {
            if (numeros[i] % 2 != 0) {
                impares += 1;
            }
        }

        System.out.println(impares);
    }
}