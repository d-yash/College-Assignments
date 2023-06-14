import java.util.*;class demo{
	public static void main(String [] args)	{		Stack<String> stack = new Stack<String>();		stack.push("Ayush");		stack.push("abc");
		stack.push("ata");
		stack.pop();		Iterator <String> itr = stack.iterator();		while(itr.hasNext())		{			System.out.println(itr.next());		}	}
}