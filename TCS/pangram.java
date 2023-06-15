//https://youtu.be/MRD5a4Xjt1g

import java.util.HashMap;
import java.util.Scanner;

public class pangram {
    public static void main(String[] args) {
        String str;
        Scanner sc = new Scanner(System.in);
        HashMap<Character, Integer> hm = new HashMap<>();

        for (char i = 'a'; i <= 'z'; i++) {
            hm.put(i, 0);
        }
        // for (char i : hm.keySet()) {
        //     System.out.println("key: " + i + " value: " + hm.get(i));
        // }

        str = sc.nextLine();
        str = str.toLowerCase();
        for (int i = 0; i < str.length(); i++) {
            if(str.charAt(i) == ' ' || str.charAt(i) == '.'){
                continue;
            }
            int value = hm.get(str.charAt(i));
            hm.put(str.charAt(i), value + 1);
        }

        for (char i : hm.keySet()) {
            if (hm.get(i) == 0) {
                System.out.println("\nString is not Pangram");
                return;
            }
        }
        System.out.println("\nString is Pangram");
    }
}
