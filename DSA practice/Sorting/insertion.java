public class insertion {
    static void insertionSort(int arr[], int n){
        for(int i=1; i<n; i++){
            int j = i - 1;
            int key = arr[i];
            while(j>=0 && key < arr[j]){
                arr[j+1] = arr[j];
                j = j - 1;
            }
            arr[j+1] = key;
        }
    }
    public static void main(String[] args) {
        int arr[] = {4,8,1,3,5};
        insertionSort(arr, arr.length);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
    
}
