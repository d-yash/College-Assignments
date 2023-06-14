//https://youtu.be/KuycgoPQ_yk
import java.util.*;

public class networkMarketing {
    public static void main(String[] args) {
        int nodes, leafProfit, per;
        Scanner sc = new Scanner(System.in);
        
        nodes = sc.nextInt();
        leafProfit = sc.nextInt();
        per = sc.nextInt();

        for (int i = 0; i < nodes-1  ; i++) {
            leafProfit = (leafProfit*per) / 100;
        }

        System.out.println("Profit of Root : " + leafProfit);
    }
}
