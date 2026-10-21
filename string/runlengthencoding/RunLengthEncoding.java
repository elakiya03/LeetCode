package string.runlengthencoding;

import java.util.Scanner;

public class RunLengthEncoding {
    static String runLengthEncoding(String s) {
        int count = 1;
        String str = "";

        for (int i = 0; i < s.length(); i++) {
            if (i < s.length() - 1 && s.charAt(i) == s.charAt(i + 1))
                count++;
            else {
                str += s.charAt(i);
                str += count;
                count = 1;
            }
        }
        return str;
    }

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter a sentence: ");
            String s = sc.nextLine();
            System.out.println(runLengthEncoding(s));
        }
    }
}
