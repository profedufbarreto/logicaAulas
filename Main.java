public class Main {
    public static void main(String[] args) {

        int[] numeros = { 10, 21, 30, 45, 50, 8, 33, 14 };
        int somarImpares = 0;

        for (int i = 0; i < numeros.length; i++) {
            if (numeros[i] % 2 != 0) {
                somarImpares += numeros[i];
            }
        }
        System.out.println("A soma dos ímpares é: " + somarImpares);
    }
}