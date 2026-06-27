public class Main {
    public static void main(String[] args) {

        int[] numbers = { 10, 50, 30, 40, 20 };
        int bigger = numbers[0];

        for (int i = 0; i < numbers.length; i++) {
            if (bigger < numbers[i]) {
                bigger = numbers[i];
            }
        }
        System.out.println("Bigger: " + bigger);
    }
}