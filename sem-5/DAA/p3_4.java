public class p3_4 {
    public static void main(String[] args) {
        int arr[] = {8, 1, 212, 47, -7, 0, 63, 24, 30, 11};
        int target = 30;
        for (int i = 0; i < arr.length; i++) {
            if(arr[i] == target){
                System.out.println("Position : " + i+1);
                return;
            }
        }
        System.out.println("\nElement not found!!");
    }
}
