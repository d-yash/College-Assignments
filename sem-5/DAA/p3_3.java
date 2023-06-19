import java.util.*;

public class p3_3 {
    public static void printArray(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + "  ");
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Random rand = new Random();
        /**System.out.print("\nEnter the no. of elements : ");
        int n = sc.nextInt();
        int arr[] = new int[n];

        // get the array
        System.out.println("\nEnter all elements ... ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            printArray(arr);
        } */

        System.out.print("\nEnter the no. of Iterations : ");
        int noOfIteration = sc.nextInt();
        int arr1[] = new int[noOfIteration];
        int arr2[] = new int[noOfIteration];

        //Generating the random array
        for(int i=0; i<noOfIteration; i++){
            arr1[i] = rand.nextInt(300000);
            arr2[i] = arr1[i];
        }
        long startTime1 = System.nanoTime();
        
        //Insertion sort
        for(int i=1; i<noOfIteration; i++){
            int current = arr1[i];
            int j = i-1;
            while(j>=0 && current < arr1[j]){
                arr1[j+1] = arr1[j];
                j--;
            }
            arr1[j+1] = current;
        }
        long diff1 = System.nanoTime() - startTime1;
        System.out.println("");
        // printArray(arr);
        
        startTime1 = System.nanoTime();
        //Selection sort
        for(int i=0; i<noOfIteration; i++){
            int minElement = i;
            for(int j=i+1; j<noOfIteration; j++){
                if(arr2[j] < arr2[minElement]){
                    minElement = j;
                }
            }
            int temp = arr2[minElement];
            arr2[minElement] = arr2[i];
            arr2[i] = temp;
        }

        long diff2 = System.nanoTime() - startTime1;
        System.out.println("");
        // printArray(arr);

        System.out.println("\n\nInsertion Sort Diff : " + (double)diff1/1000000000 + " Seconds");
        System.out.println("\n\nSelection Sort Diff : " + (double)diff2/1000000000 + " Seconds");
    }
}
