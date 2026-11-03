package runningsum;

import java.util.Scanner;

public class RunningSum {

    static int[] runningSum(int[] numbers) {
        int[] sums = new int[numbers.length];
        int total = 0;

        for (int i = 0; i < numbers.length; i++) {
            total += numbers[i];
            sums[i] = total;
        }
        return sums;
    }

    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("Enter no of elements: ");
            int n = scanner.nextInt();

            int[] numbers = new int[n];
            System.out.println("Enter " + n + " values:");
            for (int i = 0; i < n; i++) {
                numbers[i] = scanner.nextInt();
            }

            System.out.print("Running sum: ");
            for (int sum : runningSum(numbers)) {
                System.out.print(sum + " ");
            }
            System.out.println();
        }
    }
}
