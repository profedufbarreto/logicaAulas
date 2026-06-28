public class Main {
    public static void main(String[] args) {

        int[] numeros = { 10, 21, 30, 45, 50, 8, 33, 14 };
        int maior = numeros[0];
        int menor = numeros[0];
        int soma = 0;
        double media = 0;
        int pares = 0;
        int impares = 0;

        for (int i = 0; i < numeros.length; i++) {
            if (maior < numeros[i]) {
                maior = numeros[i];
            }
            if (menor > numeros.length) {
                menor = numeros[i];
            }
            if (numeros[i] % 2 == 0) {
                pares += 1;
            }
            if (numeros[i] % 2 != 0) {
                impares += 1;
            }
            soma += numeros[i];
            media = soma / numeros.length;
        }
        System.out.println("O maior número é: " + maior);
        System.out.println("O menos número é: " + menor);
        System.out.println("A soma de todos elementos é: " + soma);
        System.out.println("A média dos elementos é: " + media);
        System.out.println("Quantidade de números pares: " + pares);
        System.out.println("Quantidade de números ímpares: " + impares);
    }
}