//https://youtu.be/kdJ3XBRKH7I

import java.util.Scanner;

public class balacepipe {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int in = sc.nextInt();
        int out = sc.nextInt();
        int rust = sc.nextInt();
        
        int[] input_pipes = new int[in];
        int[] output_pipes = new int[out];
        int totalInput = 0;
        int totalOutput = 0;
        for (int i = 0; i < in; i++) {
            input_pipes[i] = sc.nextInt();
            totalInput += (input_pipes[i] - rust);
        }
        for (int i = 0; i < out; i++) {
            output_pipes[i] = sc.nextInt();
            totalOutput += (output_pipes[i] - rust);
        }
        
        int diff = totalInput - totalOutput + rust;

        if(totalInput == totalOutput)
            System.out.println("BALANCED");
        else if(totalInput > totalOutput){
            diff *= (-1);
            System.out.println(diff);
        }
        else{
            System.out.println(diff);
        }
    }
}
