
import java.util.Arrays;
import java.util.Scanner;

public class Largest {

    static int largestInArray(int[] arr) {
        return Arrays.stream(arr)
                .max()
                .orElseThrow(() -> new IllegalArgumentException("Array is empty"));
    }

    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("Enter no of elements: ");
            int n = scanner.nextInt();

            int[] arr = new int[n];
            System.out.println("Enter " + n + " values ");
            for (int i = 0; i < n; i++) {
                arr[i] = scanner.nextInt();
            }

            System.out.println("Largest: " + largestInArray(arr));
        }
    }
}
