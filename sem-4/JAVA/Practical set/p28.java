import java.util.*;import java.io.*;class p28
{	public static void copyContent(File a, File b) throws Exception
	{
		FileInputStream in = new FileInputStream(a);		FileOutputStream out = new FileOutputStream(b);		try
		{
			int n;
			while((n=in.read()) != -1)
			{
				out.write(n);
			}
		}		finally
		{
			if(in != null)
			{
				in.close();
			}
			if(out != null)
			{
				out.close();
			}
		}		System.out.println("File Copied Successfully!");
	}
	public static void main(String [] args) throws Exception	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the name of the Source File : ");		String strIn = sc.nextLine();		File x = new File(strIn);		System.out.println("Enter the name of the Destination File : ");		String strOut = sc.nextLine();		File y = new File(strOut);		copyContent(x, y);
	}
}