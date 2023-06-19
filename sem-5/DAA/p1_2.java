import java.util.LinkedList;
import java.util.Queue;

public class p1_2 {
    public static void main(String [] args){
        Queue<Integer> q = new LinkedList<>();

        q.add(83);
        q.add(24);
        q.add(8);
        q.add(30);
        q.add(6);
        q.add(11);

        System.out.print("\nQueue before deletion :");
        for(int i : q){
            System.out.print("\t" + i);
        }

        System.out.println("\nDeleted Element : " + q.remove());

        System.out.print("\nQueue after deletion :");
        for(int i : q){
            System.out.print("\t" + i);
        }

        System.out.println("\n\nTotal Elements in Queue : " + q.size());
    }
}