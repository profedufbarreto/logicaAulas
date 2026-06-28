public class Main {
    public static void main(String[] args) {

        int[] numeros = { 10, 21, 30, 45, 50, 8, 33, 14 };
        int somarPar = 0;

        for (int i = 0; i < numeros.length; i++) {
            if (numeros[i] % 2 == 0) {
                somarPar += numeros[i];
            }
        }

        System.out.println("O resultado da soma dos pares é: " + somarPar);
    }
}