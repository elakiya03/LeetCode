package string.WordCount;

import java.util.Scanner;

public class WordCount {

    static int noOfWords(String s) {
        String[] words = s.split(" ");
        return words.length;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a sentence: ");
        String s = sc.nextLine();
        System.out.println("Words: " + noOfWords(s));
        sc.close();
    }
}
