package array.aboveavgcount;

import java.util.Arrays;

public class Count {

    static int countingAboveAverage(int[] arr) {
        // Streams implementation preserved
        double avg = Arrays.stream(arr).average().orElse(0);
        System.out.printf("Average: %.6f\n", avg);

        int count = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > avg) {
                count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        // 1. Safety Check: Ensure the user provided at least the count and one number
        if (args.length < 2) {
            System.out.println("Error: Missing arguments!");
            System.out.println("Usage: java array.countaboveavg.Count <total_count> <num1> <num2> ...");
            return;
        }

        // 2. Read the first argument (args[0]) as the total array size 'n'
        // In Java, args[0] is the first USER argument (not the program name!)
        int n = Integer.parseInt(args[0]);
        int[] arr = new int[n];

        // 3. Loop through the remaining elements starting from index 1
        for (int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(args[i + 1]);
        }

        System.out.println("Above Average: " + countingAboveAverage(arr));
    }
}
