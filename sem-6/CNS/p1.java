import java.util.*;

//21BECE30255       --> 2615

public class p1 {
    // public boolean validateString(String s) {
    //     int l=0; // counter for number of letters
    //     int sp=0; // counter for number of spaces
    //     if (s == null) // checks if the String is null {
    //        return false;
    //     }
    //     int len = s.length();
    //     for (int i = 0; i < len; i++) {
    //        if ((Character.isLetter(s.charAt(i)) == true)) 
    //        {
    //           l++;
    //        }
    //        if(s.charAt(i) == ' ') {
    //           sp++;
    //        }
    //     }
    //     if(sp==0 || l==0 ) // even if one of them is zero then returns false
    //        return false;
    //     else
    //        return true;
    //  }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int key;
        String plainText;
        System.out.print("Enter the Plain text : ");
        plainText = sc.nextLine();
        // if(!validateString(plainText)){
        //     System.out.println("\nPlease enter valid Plain text!!");
        // }
        System.out.print("Enter the value of key : ");
        key = sc.nextInt();
        plainText = plainText.toLowerCase();

        char cipherText[] = new char[plainText.length()];
        for (int i = 0; i < plainText.length(); i++) {
            int ch = (int)plainText.charAt(i) + key;
            int newAscii = 0;
            if(ch <= 122 && ch >= 97){
                newAscii = (char)ch;
            }
            else if(ch > 122){
                ch -= 97;
                ch %= 26;
                ch += 97;
                newAscii = (char)ch;
            }
            else if(ch == (32+key)){
                newAscii = 32;
            }
            cipherText[i] = (char)newAscii;
        }
        System.out.print("\nCipher Text : ");
        for (int i = 0; i < cipherText.length; i++) {
            System.out.print(cipherText[i]);
        }
    }
}
