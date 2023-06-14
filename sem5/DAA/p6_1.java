import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Scanner;

class p6_1{
    static class node{
        double weight, value, denstiy;
        public node(double w, double v){
            weight = w;
            value = v;
            denstiy = value/weight;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        LinkedList<node> link = new LinkedList<node>();
        System.out.print("\nEnter total no. of items : ");
        int totalItem = sc.nextInt();
        node elements[] = new node[totalItem];
        for (int i = 0; i < totalItem; i++) {
            System.out.print("\nEnter the weight and value of " + i +" item :  ");
            double w = sc.nextDouble();
            double v = sc.nextDouble();
            elements[i] = new node(w, v);
            link.add(elements[i]);
        }
        for(node i : link){
            System.out.println(i.weight + "  " + i.value);
        }
        // Collections.sort(link);
        
    }
}