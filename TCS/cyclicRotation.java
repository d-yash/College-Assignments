public class cyclicRotation {
    // static void rotation(int arr[], int k)
    // {
    //     int n = arr.length;
    //     k = k % (n-1);

    //     int temp[] = new int[n];
    //     for (int i = 0; i < n; i++) {
    //         temp[(i+k) % n] = arr[i];
    //     }

    //     for (int i = 0; i < n ; i++) {
    //         System.out.print(arr[i] + " ");
    //     }
    // }

    
    static void reverse(int arr[], int start, int end){
        while(start < end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    static void rotateWithoutSpace(int arr[], int d){
        int n = arr.length;
        d = d % (n-1);

        //if right(clockwise) rotation
        // reverse(arr, (n-d), n-1);
        // reverse(arr, 0, d);
        // reverse(arr, 0, n-1);

        //if left(anti clockwise) rotation
        reverse(arr, 0, d-1);
        reverse(arr, d, n-1);
        reverse(arr, 0, n-1);

        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
    public static void main(String[] args) {
        int arr[] = {10,20,30,40,50};
        // rotation(arr, 2);
        rotateWithoutSpace(arr, 2);
    }
}
