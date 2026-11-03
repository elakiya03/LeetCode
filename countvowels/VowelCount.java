package countvowels;

import java.util.Scanner;

public class VowelCount {

    static int vowelCount(String sentence) {
        int count = 0;
        for (char c : sentence.toCharArray()) {
            c = Character.toLowerCase(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o') {
                count++;
            }
        }
        return count;
    }

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a sentence: ");
        String sentence = sc.nextLine();
        System.out.println("Vowel Count: " + vowelCount(sentence));
        sc.close();

    }
}
