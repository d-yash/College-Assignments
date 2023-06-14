import java.io.*;class p27{
	public static void main(String [] args) throws Exception	{
		BufferedReader obj = new BufferedReader(new InputStreamReader(System.in));		String str;		System.out.println("Enter the text (Press \'!stop\' to Exit) : ");		do
		{
			str = obj.readLine();			if(!str.equals("!stop"))				System.err.println(str);
		}while(!str.equals("!stop"));
	}
}