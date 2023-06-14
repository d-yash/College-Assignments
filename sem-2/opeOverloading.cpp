#include<iostream>
using namespace std;
class sum
{
    int a,ans;
    public:
        void setData()
        {
            cout<<"Enter any number : ";
            cin>>a;
        }
        int add(sum ts)
        {
            ans = this->a + ts.a;
            return ans;
        }
        int operator +(sum ts)
        {
            ans = this->a + ts.a + t.a;
            return ans;
        }
        int operator -(sum ts)
        {
            ans = this->a - ts.a;
            return ans;
        }
};
int main()
{
    sum s1,s2,s3;
    int s,h;
    s1.setData();
    s2.setData();
    // s3.setData();
    //h = s1.add(s2);
    s = s1 + s2;
    h = s1 - s2;
    cout<<"Addition is : "<<s<<endl;
    cout<<"Subtraction is : "<<h<<endl;
    return 0;
}