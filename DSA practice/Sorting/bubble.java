public class bubble {
    static void bubbleSort(int arr[], int n)
    {
        //code here
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    public static void main(String[] args) {
        int[] arr = {4,8,9,1,3,5};
        printArr(arr);
        bubbleSort(arr, arr.length);     
        printArr(arr);
    }
    static void printArr(int arr[]){
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");    
        }
        System.out.println();
    }
}   
