
import java.util.Arrays;
import java.util.Scanner;

public class Arraymap {

    static void doubleAll(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            arr[i] = arr[i] * 2;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter no of elements: ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.println("Enter values:");

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        doubleAll(arr);
        System.out.println("Result:" + Arrays.toString(arr));
    }
}
