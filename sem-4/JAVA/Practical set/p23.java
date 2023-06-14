import java.util.*;class print extends Thread{
	public void run()	{
		display();
	}	public static synchronized void display()	{
		for(int i=0; i<5; i++)		{
			try{
				sleep(50);				System.out.println(Thread.currentThread().getName() + " " + i);
			}			catch(Exception e){
				System.out.println(e);
			}
		}
	}
}class p23{
	public static void main(String [] args)	{
		print p = new print();		Thread t1 = new Thread(p);
		Thread t2 = new Thread(p);		t1.start();		t2.start();
	}
}