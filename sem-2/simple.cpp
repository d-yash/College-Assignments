#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    string name[n], num[n];
    for(int i=0; i<n; i++)
    {
        cin>>name[i];
        cin>>num[i];
    }
    string testName;
    // while(cin>>testName)
    // {        
    //     if(name[i] == testName)
    //     {
    //         cout<<name[i]<<"="<<num[i]<<endl;
    //         goto end;
    //     }
    //     cout<<"Not found"<<endl;
    //     i++;
    //     end:;   
    // }
    int temp = 0;
    for(int i=0; cin>>testName || i<n; i++)
    {
        if(name[i] == testName)
        {
            cout<<name[i]<<"="<<num[i]<<endl;
            temp = 1;
            break;
        }
    }
    if(temp == 0)
    {   i'm putting a insta story 
        
        cout<<"Not found"<<endl;
    }
    return 0;
}
