package string.longestword;

import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

public class LongestWord {

    // 1. Split Method
    static String longestWord(String sentence) {
        String[] words = sentence.split(" ");
        String word = "";

        for (String w : words) {
            if (w.length() > word.length()) {
                word = w;
            }
        }
        return word;
    }

    // 2. Streams
    static String longestWordUsingStreams(String sentence) {
        String[] words = sentence.split(" ");
        String word = Arrays.stream(words).max(Comparator.comparingInt(String::length)).orElse(null);
        return word;
    }

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter a Sentence: ");
            String sentence = sc.nextLine();
            System.out.println("Longest word: " + longestWord(sentence));
            System.out.println("Longest word: " + longestWordUsingStreams(sentence));
            sc.close();
        }
    }
}
