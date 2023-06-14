import java.util.*;

public class p3_2 {
    public static void printArray(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + "  ");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Random rand = new Random();
        /**
         System.out.print("\nEnter the no. of elements : ");
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
        long startTime = System.nanoTime();

        //Selection sort    O(n^2)
        for(int i=0; i<noOfIteration; i++){
            int minElement = i;
            for(int j=i+1; j<noOfIteration; j++){
                if(arr[j] < arr[minElement]){
                    minElement = j;
                }
            }
            int temp = arr[minElement];
            arr[minElement] = arr[i];
            arr[i] = temp;
        }

        long diff = System.nanoTime() - startTime;
        System.out.println("");
        // printArray(arr);

        System.out.println("\n\nDiff : " + (double)diff/1000000000 + " Seconds");

    }
}
