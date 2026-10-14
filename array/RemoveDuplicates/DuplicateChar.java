// package Array.RemoveDuplicates;

import java.util.*;

public class DuplicateChar {

    static String removeDuplicates(String s) {
        if (s == null || s.isEmpty()) {
            return s;
        }
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            if (i == 0 || s.charAt(i - 1) != s.charAt(i)) {
                sb.append(s.charAt(i));
            }
        }
        return sb.toString();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a String: ");
        String s = scanner.nextLine();
        System.out.println(removeDuplicates(s));
        scanner.close();
    }
}
