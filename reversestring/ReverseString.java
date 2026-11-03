package reversestring;

import java.util.Scanner;
import java.util.Stack;

public class ReverseString {

    static String reverseString(String s) {
        StringBuilder res = new StringBuilder(s);
        res.reverse();
        return res.toString();
    }

    static String reverseUsingTwoPointer(String s) {
        int left = 0, right = s.length() - 1;

        StringBuilder res = new StringBuilder(s);

        while (left < right) {
            char c = res.charAt(left);
            res.setCharAt(left, res.charAt(right));
            res.setCharAt(right, c);

            left++;
            right--;
        }
        return res.toString();

    }

    static String reverseUsingStack(String s) {
        Stack<Character> st = new Stack<>();

        for (int i = 0; i < s.length(); i++) {
            st.push(s.charAt(i));
        }

        StringBuilder res = new StringBuilder();

        for (int i = 0; i < s.length(); i++) {
            res.append(st.pop());
        }
        return res.toString();
    }

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter a sentence: ");
            String sentence = sc.nextLine();

            System.out.println(reverseString(sentence));
            System.out.println(reverseUsingTwoPointer(sentence));
            System.out.println(reverseUsingStack(sentence));
        }
    }
}
