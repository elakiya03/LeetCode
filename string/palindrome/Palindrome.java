package string.palindrome;

import java.util.Scanner;

public class Palindrome {
    // 1. Two pointer
    static Boolean isPalindrome(String word) {
        int left = 0, right = word.length() - 1;

        while (left < right) {
            if (Character.toLowerCase(word.charAt(left++)) != Character.toLowerCase(word.charAt(right--)))
                return false;
        }
        return true;
    }

    // 2. Single Pointer
    static Boolean isPalindromeUsingTwoPointer(String word) {

        for (int i = 0; i < word.length() / 2; i++) {
            if (Character.toLowerCase(word.charAt(i)) != Character.toLowerCase(word.charAt(word.length() - i - 1)))
                return false;
        }
        return true;
    }

    // 3. Reverse
    static Boolean isPalindromeReverse(String word) {
        return word.equalsIgnoreCase(new StringBuilder(word).reverse().toString());
    }

    public static void main(String args[]) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter a word: ");
            String word = sc.nextLine();
            System.out.println(isPalindrome(word) ? "Palindrome" : "Not Palindrome");
            System.out.println(isPalindromeUsingTwoPointer(word) ? "Palindrome" : "Not Palindrome");
            System.out.println(isPalindromeReverse(word) ? "Palindrome" : "Not Palindrome");
            sc.close();
        }
    }
}
