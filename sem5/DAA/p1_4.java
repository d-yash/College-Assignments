import java.util.LinkedList;
import java.util.Queue;

class stack{
    Queue<Integer> q1 = new LinkedList<>();
    Queue<Integer> q2 = new LinkedList<>();

    //Push the element into the stack using queue
    void push(int value){
        q2.add(value);

        while(!q1.isEmpty()){
            q2.add(q1.peek());
            q1.remove();
        }

        q1.removeAllElements();
        while(!q2.isEmpty()){
            q1.add(q2.peek());
            q2.remove();
        }
    }

    //prints the stack
    void printStack(){
        for(int i : q1){
            System.out.print("\n\t" + i);
        }
    }

    //Removes & returns the top element of the stack
    int pop(){
        return q1.remove();
    }
}
public class p1_4 {
    public static void main(String [] args)
    {
        stack s = new stack();
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);

        System.out.print("\nStack before deletion");
        s.printStack();

        System.out.println("\nDeleted element : " + s.pop());
        System.out.println("Deleted element : " + s.pop());
        
        System.out.print("\nStack after deletion");
        s.printStack();
    }    
}
