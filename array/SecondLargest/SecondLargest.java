
import java.util.Scanner;

public class SecondLargest {

    static int secondLargest(int[] arr) {
        int max = arr[0], sec = arr[0];

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > max) {
                sec = max;
                max = arr[i];
            } else if (arr[i] != max && arr[i] > sec) {
                sec = arr[i];
            }
        }
        return sec;
    }

    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("Enter no of elements: ");
            int n = scanner.nextInt();

            int[] arr = new int[n];
            System.out.println("Enter " + n + " values:");
            for (int i = 0; i < n; i++) {
                arr[i] = scanner.nextInt();
            }

            System.out.println("Second Largest: " + secondLargest(arr));
        }
    }
}
