import java.util.Scanner;

public class football {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int team = sc.nextInt();
        int[] scores = new int[3];

        int iterator = (team * (team - 1)) / 2;
        sc.nextLine(); // clearing the buffer

        for (int i = 0; i < iterator; i++) {
            String temp = sc.nextLine();

            char home = temp.charAt(0);
            char away = temp.charAt(2);

            String homeScoreString = "", awayScoreString = "";
            int j = 4;
            while (temp.charAt(j) != '-') {
                homeScoreString = homeScoreString + temp.charAt(j++);
            }
            j++;
            while (j < temp.length()) {
                awayScoreString += temp.charAt(j++);
            }

            int homeScore = Integer.valueOf(homeScoreString);
            int awayScore = Integer.valueOf(awayScoreString);

            if (homeScore > awayScore) {
                scores[home - 'A'] += 3;
            } else if (homeScore == awayScore) {
                scores[home - 'A'] += 1;
                scores[away - 'A'] += 1;
            } else {
                scores[away - 'A'] += 3;
            }
        }

        int highestScore = -1;
        int highestIndex = -1;
        for (int k = 0; k < scores.length; k++) {
            if (scores[k] > highestScore) {
                highestScore = scores[k];
                highestIndex = k;
            }
        }

        System.out.println("\nHighest score : " + (char)('A' + highestIndex) + " -> " + highestScore);
    }
}
