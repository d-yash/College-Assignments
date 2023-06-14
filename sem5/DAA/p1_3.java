import java.util.Stack;

class queue {
    Stack<Integer> s1 = new Stack<>();
    Stack<Integer> s2 = new Stack<>();

    // Adds the value in the Queue using Stack
    void add(int value) {
        s1.push(value);
    }

    // Removes & returns the first element of Queue
    int remove() {
        while (!s1.isEmpty()) {
            s2.push(s1.peek());
            s1.pop();
        }

        int firstElement = s2.peek();
        s2.pop();

        s1.removeAllElements();
        while(!s2.isEmpty()){
            s1.push(s2.peek());
            s2.pop();
        }
        return firstElement;
    }

    // Returns the first element of Queue
    int showTop() {
        while (!s1.isEmpty()) {
            s2.push(s1.peek());
            s1.pop();
        }
        int returnValue = s2.peek();

        s1.removeAllElements();
        while(!s2.isEmpty()){
            s1.push(s2.peek());
            s2.pop();
        }
        return returnValue;
    }

    // Prints the Queue
    void printQueue() {
        for (int i : s1) {
            System.out.print("   " + i + "\t");
        }
    }
}

class p1_3{
    public static void main(String [] args) {
        queue q = new queue();

        q.add(83);
        q.add(24);
        q.add(8);
        q.add(30);
        q.add(6);
        q.add(11);

        System.out.print("\nQueue before deletion :");
        q.printQueue();

        System.out.println("\nDeleted Element : " + q.remove());
        System.out.println("\nDeleted Element : " + q.remove());

        System.out.print("\nQueue after deletion :");
        q.printQueue();
    }
}
