package array.countaboveavg;

import java.util.Arrays;
import java.util.Scanner;

public class Count {

    static int countingAboveAverage(int[] arr) {
        // Streams
        double avg = Arrays.stream(arr).average().orElse(0);
        int count = 0;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > avg) {
                count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter no of elements: ");
        int n = scanner.nextInt();

        System.out.println("Enter " + n + " values ");
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        System.out.println("Above Average: " + countingAboveAverage(arr));
        scanner.close();

    }
}
