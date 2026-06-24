import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner teclado = new Scanner(System.in);
        
        int soma = 0;

        int[] numeros = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        for(int i = 0; i < numeros.length; i++){
            soma += numeros[i];
        }

        System.out.println(soma);

    }
}