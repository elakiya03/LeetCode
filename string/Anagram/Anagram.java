package string.anagram;
// package string.Anagram;

import java.util.Scanner;
import java.util.Arrays;
import java.util.HashMap;

public class Anagram {

    //Frequecy Counting
    static Boolean isAnagram(String s1, String s2) {
        if (s1.length() != s2.length()) {
            return false;
        }

        int[] freq = new int[26];
        for (int i = 0; i < s1.length(); i++) {
            freq[s1.charAt(i) - 'a']++;
            freq[s2.charAt(i) - 'a']--;
        }

        for (int idx : freq) {
            if (idx != 0) {
                return false;
            }
        }

        return true;
    }

    //Sorting
    static Boolean isAnagramSorting(String s1, String s2) {
        char[] arr1 = s1.toCharArray();
        char[] arr2 = s2.toCharArray();

        Arrays.sort(arr1);
        Arrays.sort(arr2);

        return Arrays.equals(arr1, arr2);
    }

    //Hashing
    static Boolean isAnagramHashing(String s1, String s2) {
        HashMap<Character, Integer> map
                = new HashMap<Character, Integer>();

        for (char ch : s1.toCharArray()) {
            map.put(ch, map.getOrDefault(ch, 0) + 1);
        }

        for (char ch : s2.toCharArray()) {
            map.put(ch, map.getOrDefault(ch, 0) - 1);
        }

        for (int count : map.values()) {
            if (count != 0) {
                return false;
            }
        }

        return true;
    }

    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a String 1: ");
        String s1 = scanner.nextLine();
        System.out.println("Enter a String 2: ");
        String s2 = scanner.nextLine();

        System.out.println(isAnagram(s1, s2) ? "Yes" : "No");
        System.out.println(isAnagramSorting(s1, s2) ? "Yes" : "No");
        System.out.println(isAnagramHashing(s1, s2) ? "Yes" : "No");

    }
}
