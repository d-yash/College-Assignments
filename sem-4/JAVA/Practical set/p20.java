import java.util.*;
	public static void main(String [] args)
		Thread mainThread = Thread.currentThread();
		mainThread.setName("Main_Thread");
		System.out.println("Priority of the Thread : " + mainThread.getPriority());		
		System.out.println("Id of the Thread : " + mainThread.getId());	
}