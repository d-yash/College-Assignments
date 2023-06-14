import java.util.*;class demoThread implements Runnable{	public void run()	{		System.out.println("Thread is running ... ");		getName();		for(int i=0; i<10; i++)		{			System.out.println("Count : " + i);		}	}	void getName()	{		System.out.println("Thread " + Thread.currentThread().getName() + " is being executed");	}}class p21{
	public static void main(String [] args)	{
		demoThread dt = new demoThread();		Thread th = new Thread(dt);		th.setName("First Thread");		th.start();	}
}