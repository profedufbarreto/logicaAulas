public class Main {
    public static void main(String[] args) {

        int[] numeros = { 10, 21, 30, 45, 50, 8, 33, 14 };
        int maior = numeros[0];
        int menor = numeros[0];
        int soma = 0;

        for (int i = 0; i < numeros.length; i++) {
            if (maior < numeros[i]) {
                maior = numeros[i];
            }
            if (menor > numeros.length) {
                menor = numeros[i];
            }
            soma += numeros[i];
        }
        System.out.println("O maior número é: " + maior);
        System.out.println("O menos número é: " + menor);
        System.out.println("A soma de todos elementos é: " + soma);
    }
}