#include<iostream>
using namespace std;
class car
{
    int wheel, body, figure, w, b, f;
    public:
        void setData();
        void totalCars();
        void printCar();
};
void car :: setData()
{
    cout<<"Enter total wheels : ";
    cin>>wheel;
    cout<<"Enter total body : ";
    cin>>body;
    cout<<"Enter total figure : ";
    cin>>figure;
}
void car :: totalCars()
{
    w = wheel/4; b = body; f = figure/2;
    if(w<=b && w<=f)
        cout<<w<<" toy cars can be made"<<endl;
    else if(b<=w && b<=f)
        cout<<b<<" toy cars can be made"<<endl;
    else
        cout<<f<<" toy cars can be made"<<endl;
}
int main()
{
    car c;
    c.setData();
    c.totalCars();
    return 0;
}
// 
// #include<iostream>
// using namespace std;

// /*You work in a toy car workshop, and your job is to build toy cars from a collection of parts. Each toy
// car needs 4 wheels, 1 car body, and 2 figures of people to be placed inside. Given the total number 
// of wheels, car bodies and figures available, how many complete toy cars can you make?*/
// class toy
// {
//     int wheels, cbody, people;
//     int w, c, p;
//     public:
//         void setDetails()
//         {
//             cout<<"Enter number of wheels, car body, and figures of people: ";
//             cin>>wheels>>cbody>>people;
//         }
//         void find()
//         {
//             w = wheels/4; c = cbody; p = people/2;
//             if(w<=c && w<=p)
//                 cout<<w<<" toy cars can be made"<<endl;
//             else if(c<=w && c<=p)
//                 cout<<c<<" toy cars can be made"<<endl;
//             else
//                 cout<<p<<" toy cars can be made"<<endl;
//         }
// };
// int main()
// {
//     toy t;
//     t.setDetails();
//     t.find();
//     return 0;
// }