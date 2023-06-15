/* let num = 10
 * then ans = 25        --->   2*5 = 10    25 is the smallest number whose digit mul is num
 * 
 * let num = 100
 * then ans = 455       --->    4*5*5 = 100  455 is the smallest number whose digit mul is num    
 */

//https://youtu.be/zDnl6gNuJzE


import java.util.*;

public class digitmul {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String ans = "";

        System.out.print("Enter the number : ");
        int num = sc.nextInt();

        for(int i=9; i>=2; i--){
            while(num%i == 0){
                ans = String.valueOf(i) + ans;
                num = num/i;
            }
        }

        if(num != 1){
            System.out.println("-1");
        }
        else if(ans.length() == 1) {
            ans = "1" + ans;
            System.out.println(ans);
        }
        else{
            System.out.println(ans);
        }

        int value = Integer.valueOf(ans);
        System.out.println(value);
    }
}
