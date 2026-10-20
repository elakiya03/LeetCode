package array.rotateleft;

import java.util.Arrays;
import java.util.Scanner;

public class RotateLeft {

    static void reverse(int[] arr, int left, int right) {

        while (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }
    }

    static void rotateLeftByK(int[] arr, int k) {
        int n = arr.length;

        if (k == 0) {
            return;
        }
        
        k = k % n;

        reverse(arr, 0, k - 1);
        reverse(arr, k, n - 1);
        reverse(arr, 0, n - 1);
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter no of elements: ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.println("Enter " + n + " elements");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println("Enter k: ");
        int k = sc.nextInt();

        rotateLeftByK(arr, k);
        System.out.println(Arrays.toString(arr));

    }
}
