#include<iostream>
#include<cmath>
using namespace std;

//WAP to return volume cube, cuboid and cylinder  
class first
{
    float radius, height, side, length, breadth, width;
    public:
    void volume(float s)
    {
        side=s;
        cout<<"Volume of a cube: "<<side*side*side<<" cubic cm"<<endl;
    }
    void volume(float l,float b,float w)
    {
        length=l;
        breadth=b;
        width=w;
        cout<<"Volume of a cuboid: "<<length*breadth*width<<" cubic cm"<<endl;
    }
    void volume(float r, float h)
    {
        radius=r;
        height=h;
        cout<<"Volume of a cylinder: "<<(M_PI*radius*radius*height)<<" cubic cm"<<endl;
    }
};
int main()
{
    first v;
    float s, r, h, l, b, w;

    cout<<"Enter side of cube <in cm>: ";
    cin>>s;
    cout<<"Enter length, breadth and width of cuboid <in cm>: ";
    cin>>l>>b>>w;
    cout<<"Enter radius and height of cylinder <in cm>: ";
    cin>>r>>h;

    v.volume(s);    
    v.volume(l,b,w);
    v.volume(r,h);    
    return 0;
}