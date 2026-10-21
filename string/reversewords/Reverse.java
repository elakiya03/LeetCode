package string.reversewords;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;
import java.util.Stack;

public class Reverse {

    static String reverseString(String s) {
        ArrayList<String> res = new ArrayList<>();
        String[] words = s.split("\\s+");

        for (String word : words) {
            res.add(word);
        }

        Collections.reverse(res);
        return String.join(" ", res);
    }

    public static String reverseUsingTwoPointer(String s) {
        String[] words = s.trim().split("\\s+");

        int left = 0;
        int right = words.length - 1;

        while (left < right) {
            String temp = words[left];
            words[left] = words[right];
            words[right] = temp;

            left++;
            right--;
        }

        return String.join(" ", words);
    }

    static String reverseUsingStack(String s) {
        if (s.isBlank()) {
            return "";
        }

        String[] words = s.trim().split("\\s+");
        Stack<String> st = new Stack<>();

        for (String word : words) {
            st.push(word);
        }

        StringBuilder res = new StringBuilder();
        while (!st.isEmpty()) {
            res.append(st.pop());
            if (!st.isEmpty()) {
                res.append(" ");
            }
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
