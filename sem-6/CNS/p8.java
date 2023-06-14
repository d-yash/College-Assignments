import java.util.Scanner;

public class p8 {
    public static String columnar(String pt, String key, int keyLen) {
        char[][] arr = new char[keyLen][keyLen];
        initArr(arr, keyLen);
        int ptPointer = 0;

        int[] aplhaIndexArr = new int[key.length()];
        for (int i = 0; i < key.length(); i++) {
            aplhaIndexArr[i] = ((int) key.charAt(i) - 64);
        }

        for (int i = 0; i < keyLen; i++) {
            for (int j = 0; j < keyLen; j++) {
                if (ptPointer < pt.length())
                    arr[i][j] = pt.charAt(ptPointer++);
            }
            System.out.println();
        }
        printArr(arr, keyLen);
        String cipher = "";
        for (int i = 0; i < keyLen; i++) {
            int min = aplhaIndexArr[i], index = -1;
            for (int k = 1; k < aplhaIndexArr.length; k++) {
                if (aplhaIndexArr[k] <= min) {
                    min = aplhaIndexArr[k];
                    index = k;
                }
            }
            for (int j = 0; j < keyLen; j++) {
                cipher = cipher + arr[j][index];
            }
            aplhaIndexArr[index] = 100;
        }
        return cipher;
    }

    public static void initArr(char[][] arr, int keyLen) {
        for (int i = 0; i < keyLen; i++) {
            for (int j = 0; j < keyLen; j++) {
                arr[i][j] = ' ';
            }
        }
    }

    public static void printArr(char[][] arr, int keyLen) {
        try {
            System.out.println();
            for (int i = 0; i < keyLen; i++) {
                for (int j = 0; j < keyLen; j++) {
                    Thread.sleep(100);
                    System.out.print(arr[i][j] + "  ");
                }
                System.out.println();
            }
        } catch (Exception e) {
            System.out.println(e);
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the pain text : ");
        String pt = sc.nextLine();
        System.out.print("Enter the key : ");
        String key = sc.next();
        int keyLen = key.length();
        if (pt.length() >= (keyLen * keyLen)) {
            System.out.println("\n\nPT exceeded the matrix");
            return;
        }
        key = key.toUpperCase();
        String cipher = columnar(pt, key, keyLen);
        System.out.println("\n" + cipher);
    }
}
