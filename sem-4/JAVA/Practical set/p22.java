import java.util.*;class multiThread implements Runnable{
	public void run()	{		try{
			System.out.println(Thread.currentThread().getName() + " is running");
		}		catch(Exception e)		{
			System.out.println(e);
		}	}
}class p22{
	public static void main(String [] args)	{
		for(int i=0; i<5; i++)		{			Thread th = new Thread(new multiThread());						th.start();
		}
	}
}