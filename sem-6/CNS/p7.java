import java.util.*;
import java.lang.*;

public class p7 {
    public static void print(char[][] arr, int rail, int totalCol){ 
        try {
            for (int i = 0; i < rail; i++) {
                for (int j = 0; j < totalCol; j++) {
                    Thread.sleep(100);
                    System.out.print(arr[i][j]);
                }
                System.out.println();
            }            
        } catch (Exception e) {
            System.out.println(e);
        }
    }  
    public static void railFence(int rail, int totalCol, String pt)
    {
        char arr[][] = new char[rail][totalCol];
        for (int i = 0; i < rail; i++) {
            for (int j = 0; j < totalCol; j++) {
                arr[i][j] = ' ';
            }
        }
        boolean dir = false;
        int row = 0, col = 0;
        for (int i = 0; i < totalCol; i++) {
            if(row == 0 || row == rail-1)
                dir = !dir;
            arr[row][col++] = pt.charAt(i);
            if(dir)
                row++;
            else    
                row--;
        }
        print(arr, rail, totalCol);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the no. of rails : ");
        int rail = sc.nextInt();
        System.out.print("Enter the Pain text : ");
        String pt = sc.next();
        int totalCol = pt.length();
        railFence(rail, totalCol, pt); 
    }
}
