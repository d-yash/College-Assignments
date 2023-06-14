#include <iostream>
#include <string.h>
using namespace std;

int check()
{
    char s[50];
    int n, c1 = 0, c2 = 0, len = 0;
    cin >> s;
    len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        c2 = 0;
        if (s[i] == '(')
        {
            for (int j = i + 1; s[j] == ')'; j++)
            {
                c1++;
            }
        }
        else
        {
            c2 = 1;
        }
    }
    if (s[0] == ')')
    {
        return 0;
    }
    else if (s[len] == '(')
    {
        return 0;
    }
    else if (c2 == 0)
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