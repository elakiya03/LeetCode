package array.longeststreak;

import java.util.Scanner;

public class LongestStreak {

    static int longestStreak(int[] arr) {
        if (arr == null || arr.length == 0) {
            return 0;
        }

        int maxStreak = 1;
        int streak = 1;

        for (int i = 1; i < arr.length; i++) {
            if (arr[i] == arr[i - 1]) {
                streak++;
                if (streak > maxStreak) {
                    maxStreak = streak;
                }
            } else {
                streak = 1;
            }
        }
        return maxStreak;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter no of elements: ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.println("Enter " + n + " values");

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println("Longest Streak: " + longestStreak(arr));
        sc.close();
    }
}
