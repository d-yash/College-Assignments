import java.util.*;

class Bill
{
	double item1 = 0, item2 = 0, item3 = 0;	double billPrice, avgPrice;	void setItem(double i)	{		item1 = i;		findBill();	}	void setItem(double i, double j)
	{
		item1 = i; item2 = j;		findBill();
	}	void setItem(double i, double j, double k)
	{
		item1 = i; item2 = j; item3 = k;
		findBill();	}	void findBill()	{		billPrice = item1 + item2 + item3;		avgPrice = billPrice / 3;		System.out.println("Total Amount : " + billPrice);		System.out.println("Average Amount : " + avgPrice);	}
}
class p7
{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);		Bill b = new Bill();		System.out.print("Howmany Items do you want to purchase : ");		int total = sc.nextInt();		int item1, item2, item3;		switch(total)		{			case 1:				System.out.print("Enter the price of items : ");				item1 = sc.nextInt();				b.setItem(item1);				break;			case 2:				System.out.print("Enter the price of items : ");				item1 = sc.nextInt();				item2 = sc.nextInt();				b.setItem(item1, item2);				break;			case 3:				System.out.print("Enter the price of items : ");				item1 = sc.nextInt();
				item2 = sc.nextInt();				item3 = sc.nextInt();
				b.setItem(item1, item2, item3);
				break;				default:				System.out.println("Invalid Choice!!");		}
	}
}