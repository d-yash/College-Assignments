#include <iostream>
using namespace std;

/*We want to store the information of different vehicles. Create a class named Vehicle with two data member 
named mileage and price. Create its two subclasses
1. Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel or petrol).
2. Bike with data members to store the number of cylinders, number of gears, cooling type(air, liquid or oil), 
   wheel type(alloys or spokes) and fuel tank size(in inches)
Make another two subclasses Audi and Ford of Car, each having a data member to store the model type. 
Next, make two subclasses Bajaj and TVS, each having a data member to store the make-type.
Now, store and print the information of an Audi and a Ford car (i.e. model type, ownership cost, warranty, 
seating capacity, fuel type, mileage and price.) Do the same for a Bajaj and a TVS bike.*/

class vehicles
{
protected:
    float mileage, price;

public:
    void setVehicles()
    {
        cout << "Enter the mileage of the vehicle : ";
        cin >> mileage;
        cout << "Enter the price of the vehicle : ";
        cin >> price;
    }
    void printVehicles()
    {
        cout << "Mileage of the Vehicle is : " << mileage << endl;
        cout << "Price of the Vehicles is : " << price << endl;
    }
};
class Car : public vehicles
{
protected:
    float ownershipCost;
    int warranty, seatingCapacity;
    char fuelType;

public:
    void setCar()
    {
        cout << "Enter the Total ownership cost : ";
        cin >> ownershipCost;
        cout << "Enter the years of the warranty : ";
        cin >> warranty;
        cout << "Enter the Total seating Capacity : ";
        cin >> seatingCapacity;
        cout << "Enter the fuel Type <d = diesel> OR <p = petrol> : ";
        cin >> fuelType;
    }
    void printCar()
    {
        cout << "Ownership cost : " << ownershipCost << endl;
        cout << "Warranty : " << warranty << endl;
        cout << "Seating capacity : " << seatingCapacity << endl;
        cout << "Fuel type : " << fuelType << endl;
    }
};
class Bike : public vehicles
{
protected:
    int no_cylinder, no_gears;
    char coolingType, wheelType;
    float fuel_tank;

public:
    void setBike()
    {
        cout << "Enter the no of cylinder : ";
        cin >> no_cylinder;
        cout << "Enter the no of gears : ";
        cin >> no_gears;
        cout << "Enter the cooling type <a = air> OR <l = liquid> OR <o = oil> : ";
        cin >> coolingType;
        cout << "Enter the wheel type <a = alloys> OR <s = spokes> : ";
        cin >> wheelType;
        cout << "Enter the size of fuel tank <in inches> : ";
        cin >> fuel_tank;
    }
    void printBike()
    {
        cout << "No of cylinder : " << no_cylinder << endl;
        cout << "NO of gears : " << no_gears << endl;
        cout << "Cooling type : " << coolingType << endl;
        cout << "Wheel Type : " << wheelType << endl;
        cout << "Fuel tank size : " << fuel_tank << endl;
    }
};
class Audi : public Car
{
    char name[50];

public:
    void setAudi()
    {
        cout << "Enter the Model Name of Audi : ";
        cin >> name;
    }
    void printAudi()
    {
        cout << "\n\nModel Name : " << name << endl;
    }
    void print_all_Audi()
    {
        printAudi();
        printVehicles();
        printCar();
    }
};
class Ford : public Car
{
    char name[50];

public:
    void setFord()
    {
        cout << "Enter the Model Name of Ford : ";
        cin >> name;
    }
    void printFord()
    {
        cout << "\n\nModel Name : " << name << endl;
    }
    void print_all_Ford()
    {
        printFord();
        printVehicles();
        printCar();
    }
};
class TVS : public Bike
{
    char name[50];

public:
    void setTVS()
    {
        cout << "Enter the Model Name of TVS : ";
        cin >> name;
    }
    void printTVS()
    {
        cout << "\n\nModel Name : " << name << endl;
    }
    void print_all_TVS()
    {
        printTVS();
        printVehicles();
        printBike();
    }
};
class Bajaj : public Bike
{
    char name[50];

public:
    void setBajaj()
    {
        cout << "Enter the Model Name Bajaj : ";
        cin >> name;
    }
    void printBajaj()
    {
        cout << "\n\nModel Name : " << name << endl;
    }
    void print_all_Bajaj()
    {
        printBajaj();
        printVehicles();
        printBike();
    }
};
int main()
{
    Audi a;
    a.setAudi();
    a.setVehicles();
    a.setCar();
    Ford f;
    f.setFord();
    f.setVehicles();
    f.setCar();
    TVS t;
    t.setTVS();
    t.setVehicles();
    t.setBike();
    Bajaj b;
    b.setBajaj();
    b.setVehicles();
    b.setBike();

    a.print_all_Audi();
    f.print_all_Ford();
    t.print_all_TVS();
    b.print_all_Bajaj();
    return 0;
}
