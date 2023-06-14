#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s[n];

	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (s[i] == s[i + 1])
		{
			n = n - 2;
		}
		if (s[i] == s[i + 1] && s[i] == s[i + 2])	//ab ab ab cd
		{
			i = i + 1;
		}
	}
	cout << n << endl;
	return 0;
}