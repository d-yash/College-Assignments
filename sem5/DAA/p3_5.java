import java.util.*;

class p3_5 {
    public static void main(String [] args) {

        int arr[] = {15, 25, 28, 7, 33, 11, 9, 17};
        int mx = arr[0];
        int n = arr.length;
        for (int i = 1; i < n; i++){
            if (arr[i] > mx)
                mx = arr[i];
        }
        int m = mx;
        
        for (int exp = 1; m / exp > 0; exp *= 10) {
            int output[] = new int[n];
            int i;
            int count[] = new int[10];
            Arrays.fill(count, 0);

            for (i = 0; i < n; i++)
                count[(arr[i] / exp) % 10]++;

            for (i = 1; i < 10; i++)
                count[i] += count[i - 1];

            for (i = n - 1; i >= 0; i--) {
                output[count[(arr[i] / exp) % 10] - 1] = arr[i];
                count[(arr[i] / exp) % 10]--;
            }

            for (i = 0; i < n; i++)
                arr[i] = output[i];
        }

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
