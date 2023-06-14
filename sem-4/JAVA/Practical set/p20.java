import java.util.*;class p20{
	public static void main(String [] args)	{
		Thread mainThread = Thread.currentThread();		System.out.println("\nName of the Thread (Before changing) : " + mainThread.getName());		
		mainThread.setName("Main_Thread");		System.out.println("Name of the Thread (After changing) : " + mainThread.getName());		
		System.out.println("Priority of the Thread : " + mainThread.getPriority());		
		System.out.println("Id of the Thread : " + mainThread.getId());		}
}