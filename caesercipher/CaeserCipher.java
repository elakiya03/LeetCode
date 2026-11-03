package caesercipher;

import java.util.Scanner;

public class CaeserCipher {

    static String encryption(String s, int n) {

        StringBuilder result = new StringBuilder();

        for (int i = 0; i < s.length(); i++) {
            char c = Character.toLowerCase(s.charAt(i));

            if (c >= 'a' && c <= 'z') {
                c = (char) ((c - 'a' + n) % 26 + 'a');
                result.append(c);
            }
        }
        return result.toString();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String s = sc.nextLine();

        System.out.print("Enter shift value: ");
        int shift = sc.nextInt();

        System.out.println(encryption(s, shift));

        sc.close();
    }
}
