#include<iostream>
#include<cstring>
using namespace std;

class temp
{
    char name[50];
    int no;
    public:
        void setter()
        {
            cout<<"Enter the name : ";
            cin.getline(name, 50);
            cout<<"Enter the number : ";
            cin>>no;
        }
        char* getName()
        {
            return name;
        }
};   
int main()
{
    temp t;
    t.setter();
    char name[50];
    strcpy(name, t.getName());
    cout<<"Name : "<<name<<endl;
    for(int i=0; i<50; i++)
        name[i] = NULL;
    cout<<"Name : "<<name<<" nothing here"<<endl;
    return 0;
}