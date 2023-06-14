#include<iostream>
using namespace std;

void towerOfHanoi(int n, char src, char aux, char des)
{
    if(n == 1)
    {
        cout<<"Move disk 1 from "<<src<<" to "<<des<<endl;
        return;
    }
    towerOfHanoi(n-1, src, des, aux);
    cout<<"Move disk "<<n<<" from "<<src<<" to "<<des<<endl;
    towerOfHanoi(n-1, aux, src, des);
}
int main()
{
    int n;
    cout<<"\nEnter the total number of disks : ";
    cin>>n;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}