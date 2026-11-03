package mergesortedarray;

import java.util.*;

public class MergeSort {

    static void mergeSort(int[] arr1, int[] arr2) {
        int n1 = arr1.length;
        int n2 = arr2.length;
        int i = 0, j = 0, k = 0;

        int[] temp = new int[n1 + n2];

        while (i < n1 && j < n2) {
            if (arr1[i] < arr2[j]) {
                temp[k++] = arr1[i++];
            } else {
                temp[k++] = arr2[j++];
            }
        }

        while (i < n1) {
            temp[k++] = arr1[i++];
        }

        while (j < n2) {
            temp[k++] = arr2[j++];
        }

        // for (int value : temp) {
        // System.out.print(value + " ");
        // }
        System.out.println(Arrays.toString(temp));
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter n1: ");
        int n1 = sc.nextInt();

        int[] arr1 = new int[n1];
        for (int i = 0; i < n1; i++) {
            arr1[i] = sc.nextInt();
        }

        System.out.print("Enter n2: ");
        int n2 = sc.nextInt();

        int[] arr2 = new int[n2];
        for (int i = 0; i < n2; i++) {
            arr2[i] = sc.nextInt();
        }

        mergeSort(arr1, arr2);
        sc.close();
    }
}
