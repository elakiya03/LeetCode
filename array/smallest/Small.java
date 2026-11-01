package array.smallest;

import java.util.Scanner;

public class Small {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 3 elements: ");
        int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();

        int small = (a < b) ? ((a < c) ? a : c) : (b < c ? b : c);
        System.out.println("Smallest: " + small);

        sc.close();
    }
}
