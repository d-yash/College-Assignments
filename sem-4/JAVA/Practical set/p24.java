import java.util.*;
{
	public void run()
	{
		}		
	}
}
	public static void main(String [] args)
		Thread t1 = new Thread(new demoThread(), "Thread A");
		Thread t2 = new Thread(new demoThread(), "Thread B");
		Thread t3 = new Thread(new demoThread(), "Thread C");
		t1.setPriority(10);
		t2.start();
		t3.start();
}