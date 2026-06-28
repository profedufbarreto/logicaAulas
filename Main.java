public class Main {
    public static void main(String[] args) {

        int[] numeros = { 10, 20, 10, 30, 10, 40, 10 };

        int cont = 0;

        for (int i = 0; i < numeros.length; i++) {
            if (numeros[i] == 10) {
                cont += 1;
            }
        }
        System.out.println("O número 10 foi encontado : " + cont);
    }
}