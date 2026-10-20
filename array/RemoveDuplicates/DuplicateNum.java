package array.removeduplicates;

import java.util.LinkedHashSet;
import java.util.Scanner;
import java.util.Arrays;

public class DuplicateNum {

    // LinkedHashSet maintains the order of insertion, so it will remove duplicates
    // and elements will be printed in the same order in which it is inserted
    static void removeDuplicates(int[] arr) {
        LinkedHashSet<Integer> s = new LinkedHashSet<Integer>();

        for (int x : arr) {
            s.add(x);
        }

        System.out.println(s);
    }

    // Using streams
    static void removeDuplicatesUsingStreams(int[] arr) {
        Arrays.stream(arr)
                .distinct()
                .forEach(n -> System.out.print(n + " "));
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
        removeDuplicates(arr);
        removeDuplicatesUsingStreams(arr);
        sc.close();
    }
}
