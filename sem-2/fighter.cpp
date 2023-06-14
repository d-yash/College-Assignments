#include<iostream>
using namespace std;
class fighter
{
    int bomb, armor;
    string gun;
    int health;
    public:
        void setData(int b, int a, int h, string g)
        {
            bomb = b;
            armor = a;
            gun = g;
            health = h;
        }
        void printBomb()
        {
            cout<<"Left bombs are : "<<bomb-1;
        }
        void printHealth()
        {
            cout<<"\tLeft Health is : "<<100-health<<endl;
        }
        void printArmor()
        {
            cout<<"\tLeft Armor are : "<<armor-1;
        }
        void printData()
        {
            cout<<"Left bombs are : "<<bomb;
            cout<<"\tLeft Health is : "<<health;
            cout<<"\tLeft Armor are : "<<armor<<endl<<endl;
        }
};
int main()
{
    fighter f, f1, f2;
    f.setData(15,11,95,"m416");
    f1.setData(10,15,90,"AK47");
    f2.setData(5,28,85,"MK14");

    cout<<"Data of f is ..."<<endl;
    f.printData();
    cout<<"Data of f1 is ..."<<endl;
    f1.printData();
    cout<<"Data of f2 is ..."<<endl;
    f2.printData();


    f.printBomb(); f.printArmor(); f.printHealth();
    f1.printBomb(); f1.printArmor(); f1.printHealth();
    f2.printBomb(); f2.printArmor(); f2.printHealth();

    return 0;
}
