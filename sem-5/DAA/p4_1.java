import java.util.*;

public class p4_1 {
    static long findFact(long n)
    {
        if (n>=1)
            return n*findFact(n-1);
        else
            return 1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("\nEnter the number : ");
        long num = sc.nextLong();
        long fact = 1;
        for (long i = num; i > 0; i--) {
            fact *= i;
        }
        System.out.println("\nFactorial : " + fact);
        System.out.println("Factorial (Recursive) : " + findFact(num));
    }
}
