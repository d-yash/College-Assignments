import java.util.*;class demoThread implements Runnable
{
	public void run()
	{		for(int i=0; i<3; i++)		{			System.out.println(Thread.currentThread().getName() + " " + i);	
		}		
	}
}class p24{
	public static void main(String [] args)	{
		Thread t1 = new Thread(new demoThread(), "Thread A");
		Thread t2 = new Thread(new demoThread(), "Thread B");
		Thread t3 = new Thread(new demoThread(), "Thread C");
		t1.setPriority(10);		t2.setPriority(1);		t3.setPriority(2);		t1.start();
		t2.start();
		t3.start();	}
}