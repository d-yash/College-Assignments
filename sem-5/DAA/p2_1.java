import java.util.*;
import java.time.*;

public class p2_1 {
    public static void printArray(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + "  ");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Random rand = new Random();
        /** System.out.print("\nEnter the no. of elements : ");
            int n = sc.nextInt();
            int arr[] = new int[n];
    
            // get the array
            System.out.println("\nEnter all elements ... ");
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            printArray(arr);
        */
            

        System.out.print("\nEnter the no. of Iterations : ");
        int noOfIteration = sc.nextInt();
        int arr[] = new int[noOfIteration];

        //Generating the random array
        for(int i=0; i<noOfIteration; i++){
            arr[i] = rand.nextInt(300000);
        }
        // printArray(arr);

        long startTime = System.nanoTime();
        // Bubble sort O(n^2)
        for (int i = 0; i < noOfIteration - 1; i++) {
            for (int j = 0; j < noOfIteration - i - 1; j++) {
                // swap
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        long diff = System.nanoTime() - startTime;
        System.out.println("");
        printArray(arr);
        
        System.out.println("\n\nDiff : " + (double)diff/1000000000 + " Seconds");
    }
}
