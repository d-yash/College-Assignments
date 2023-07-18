public class temp1 {
    static int bs(int arr[], int target){
        int low = 0;
        int high = arr.length-1;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            if(arr[mid] == target)
                return mid;
            else if(arr[mid] > target)
                high = mid - 1;
            else 
                low = mid + 1;
        }
        return -1;
    }
    public static void main(String[] args) {
        int arr[] = {1,5,7,9,11,13,15};
        System.out.println(bs(arr, 11));
    }
}
