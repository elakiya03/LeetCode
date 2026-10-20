package array.reversearray;

import java.util.Arrays;
import java.util.Scanner;

public class ReverseArray {

    static void reverseArrayUsingTwoPointer(int[] arr) {
        int left = 0, right = arr.length - 1;

        while (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }

        System.out.println("Two Pointer");
        System.out.println(Arrays.toString(arr));
    }

    static void reverseArrayUsingSinglePointer(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n / 2; i++) {
            int temp = arr[i];
            arr[i] = arr[n - i - 1];
            arr[n - i - 1] = temp;
        }
        System.out.println("Single Pointer");
        System.out.println(Arrays.toString(arr));
    }

    static void reverseArray(int[] arr) {
        // Using Collection
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

        reverseArrayUsingTwoPointer(arr);
        reverseArrayUsingSinglePointer(arr);
        reverseArray(arr);

    }
}
