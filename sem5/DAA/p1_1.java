import java.util.*;

class p1_1{
    public static void main(String [] args) {
        Stack<Integer> s = new Stack<>();

        s.push(24);
        s.push(8);
        s.push(30);
        s.push(6);
        s.push(11);
        s.push(83);

        System.out.println("\nTop : " + s.peek());
        System.out.println("Deleting the top : " + s.pop());
        
        System.out.println("\n  Stack");
        for(int i : s){
            System.out.print("   " + i + "\n");
        }

        System.out.println("\nTotal Elements in stack : " + s.size());
    } 
}