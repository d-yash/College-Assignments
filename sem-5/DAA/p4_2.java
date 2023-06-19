import java.util.*;

public class p4_2 {
    static int n=0, m=1, total=0;
    static void findFibonnaci(int count){
        if(count > 0){
            total = n+m;
            n = m;
            m = total;
            System.out.print(total + "  ");
            findFibonnaci(count-1);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("\nEnter elements of fibonnaci series : ");
        int num = sc.nextInt();

        int x = 0, y = 1;
        System.out.print(x + "  " + y + "  ");
        for (int i = 0; i < num-2; i++) {
            int sum = x+y;
            System.out.print(sum + "  ");
            x = y;
            y = sum;
        }
        System.out.print("\nUsing recursion..\n" + n + "  " + m + "  ");
        findFibonnaci(num-2);
    }
}
