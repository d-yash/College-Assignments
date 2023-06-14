#include<iostream>
#include<cmath>
using namespace std;

//WAP to find whether the number is prime or not by using member function 
class first
{
    int n;
    int flag=0;
    public:
        void prime()
        {
            cout<<"Enter the number : ";
            cin>>n;
            for(int i=2; i<sqrt(n); i++)
            {
                if(n%i==0)
                {
                    flag=1;
                    break;
                }
            }
            print(flag);
        }
        void print(int flag)
        {
            if(flag==0)   
                cout<<n<<" is Prime"<<endl;
            else
                cout<<n<<" isn't Prime"<<endl;
        }
};    
int main()
{
    first p;
    p.prime();
    return 0;
}