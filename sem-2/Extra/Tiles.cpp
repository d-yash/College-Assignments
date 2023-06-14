/*Create a class LAND having data members: length, width, area1. Write member 
functions to read and display the data of land. Also, calculates the area of the land.
Create another class TILES having data members: l, w, area2. Write a memberfunction to get the data of tile. Calculate the area of one tile. Class TILE has a 
member function named number_of_tiles() which is a friend of class LAND and 
takes the object of class LAND by reference which calculates the number of tiles 
which can be put over the land area. Write the main function to test all the 
functions. Use the concept of member function of one class can be a friend
function of another class.*/

#include<iostream>
using namespace std;
class LAND;
class TILES
{
    int l, w, area2, totalTiles;
    public:
        void setTiles();
        void displayTiles();
        void number_of_tiles(LAND &);
};
class LAND
{
    int length, width, area1;
    friend void TILES :: number_of_tiles(LAND &);
    public:
        void setLand();
        void displayLand();
        int getAreaLand();
};
void LAND :: setLand()
{
    cout<<"Enter the Length & Width of the land : ";
    cin>>length>>width;
}
void LAND :: displayLand()
{
    area1 = length*width;
    cout<<"\nLength of the Land is : "<<length<<"\t"
        <<"Width of the Land is : "<<width<<endl
        <<"Area of the Land is : "<<area1<<endl;
}
int LAND :: getAreaLand()
{
    return area1;
}
void TILES :: setTiles()
{
    cout<<"Enter Length and Width of the tiles : ";
    cin>>l>>w;
}
void TILES :: displayTiles()
{
    area2 = l*w;
    cout<<"\nLength of the Tiles is : "<<l<<"\t"
        <<"Width of the Tiles is : "<<w<<endl
        <<"Area of Tiles is : "<<area2<<endl;
}
void TILES :: number_of_tiles(LAND &x)
{
    totalTiles = x.getAreaLand() / area2;
    cout<<"\nTotal number of tiles which will be needed is : "<<totalTiles<<endl;
}
int main()
{
    LAND x;
    TILES y;
    x.setLand(); y.setTiles();
    x.displayLand(); y.displayTiles();
    y.number_of_tiles(x);
    return 0;
}