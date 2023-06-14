//https://youtu.be/OOYaQdurwIA

import java.util.Scanner;

public class diaDiff {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        System.out.println("Enter the matrix");
        int arr[][] = new int[n][n];

        int totalBackward = 0, totalForward = 0;
        int end = 2;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = sc.nextInt();
                if(i == j){
                    totalBackward += arr[i][j];
                }
            }
            totalForward += arr[i][end--];
        }

        System.out.println("ABS diff : " + Math.abs(totalBackward - totalForward));
    }
}
