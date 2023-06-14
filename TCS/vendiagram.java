//https://youtu.be/OOYaQdurwIA

import java.util.Scanner;

public class vendiagram {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int p1, p2, p3, q, x;
        int total, totalNonParticipant;
        /*
            p1 = solved first and second
            p2 = solved second and third
            p3 = solved first and third

            q = solved all 3 que
            x = solved que 1, solved que 2, solved que 3
                x are the people who solved atleast one que, number of people who solved atleast one que are same
         */

        p1 = sc.nextInt();
        p2 = sc.nextInt();
        p3 = sc.nextInt();
        q = sc.nextInt();
        total = sc.nextInt();
        totalNonParticipant = sc.nextInt();

        int temp = total - totalNonParticipant + q + (p1-q) + (p2-q) + (p3-q);
        x = temp/3;
        System.out.println("Solved exactly one of the 3 problems : " + x);
        System.out.println("solved first problem : " + (x+p1+p3-q));
    }
}
