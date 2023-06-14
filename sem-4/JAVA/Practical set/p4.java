import java.util.*;

class demo
{
	int vowel = 0;	int getVowel()	{
		return vowel;
	}	void countVowel(String str)	{		for(int i=0; i<str.length(); i++)		{			char ch = str.charAt(i);			if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')				vowel++;		}	}
}
class p4
{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);		demo d = new demo();		System.out.print("Enter the String : ");		String str = sc.nextLine();		d.countVowel(str);		int count = d.getVowel();
		System.out.println("Vowel : " + count);	}
}	