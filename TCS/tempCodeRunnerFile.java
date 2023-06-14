import java.util.Scanner;

public class football {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int team = sc.nextInt();
        int[] scores = new int[3];

        int iterator = (team*(team-1))/2;
        for (int i = 0; i < iterator; i++) {
            String temp = sc.nextLine();

            char home = temp.charAt(0);
            char away = temp.charAt(2);

            String homeScore = "", awayScore = "";
            int j = 4;
            while(temp.charAt(j) != '-'){
                homeScore = homeScore + temp.charAt(j++);
            }
            j++;
            while(j < temp.length()){
                awayScore += temp.charAt(j);
            }

            System.out.println("home : " + homeScore);
            System.out.println("away : " + awayScore);
        }
    }
}
