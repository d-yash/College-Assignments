import java.util.*;

public class lexiString{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();   //clearing buffer
        
        String[] dic = new String[n];
        String[] word = new String[n];
        int[][] ans = new int[n][];

        for (int i = 0; i < n; i++) {
            dic[i] = sc.nextLine();
            word[i] = sc.nextLine();            
        }

        for (int i = 0; i < n; i++) {
            for (int k = 0; k < word[i].length(); k++) {
                for (int j = 0; j < 26; j++) {
                    if(word[i].charAt(k) == dic[i].charAt(j)){
                        ans[i] = j;
                    }
                }
           } 
        }

        for (int i = 0; i < n; i++) {
            System.out.println(ans[i]);
        }

    }   
}