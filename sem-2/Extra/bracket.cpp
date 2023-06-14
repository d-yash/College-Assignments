#include <iostream>
#include <string.h>
using namespace std;

int check()
{
    char s[50];
    int n, c1 = 0, c2 = 0, c = 0, len = 0;
    cin >> s;
    len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '(')
        {
            c++;
            if(s[i+1] != '(')
            {
                for (int j = i + 1; s[j] == ')'; j++)
                {
                    c1++;
                }
            }
        }
        else
        {
            c2++;
        }
    }
    // cout<<" C : "<<c<<endl;
    // cout<<" C2 : "<<c2<<endl;
    // cout<<" C1 : "<<c1<<endl;
    if (s[0] == ')')
    {
        return 0;
    }
    else if (s[len-1] == '(')
    {
        return 0;
    }
    else if(c != c2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    cout << check();
}