#include<iostream>
using namespace std;

/*Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale which inherits both the above classes. Now, create a function in each of these classes which prints "I am mammal", "I am a marine animal" and "I belong to both the categories: Mammals as well as Marine Animals" respectively. Now, create an object for each of the above class and try calling
1 - function of Mammals by the object of Mammal
2 - function of MarineAnimal by the object of MarineAnimal
3 - function of BlueWhale by the object of BlueWhale
4 - function of each of its parent by the object of BlueWhale*/
class Mammals
{
    public:
        void print()
        {
            cout<<"I am mammal"<<endl;
        }
};
class MarineAnimals
{
    public:
        void print()
        {
            cout<<"I am a marine animal"<<endl;
        }
};
class BlueWhale : public Mammals, public MarineAnimals
{
    public:
        void print()
        {
            cout<<"I belong to both the categories"<<endl;
        }
};
int main()
{
    Mammals mam;
    MarineAnimals MA;
    BlueWhale b;
    mam.print();
    MA.print();
    b.print();
    b.Mammals :: print();   
    b.MarineAnimals :: print();
    return 0;
}