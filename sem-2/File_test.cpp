#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class Trial
{
    char name[10], subject[10];
    int marks[2];
public:
    void getDetails()
    {
        cout<<"Enter Your Name: ";
        fflush(stdin);
        cin.getline(name,10);
        cout<<"Enter Subject: ";
        fflush(stdin);
        cin.getline(subject,10);
        cout<<"Enter Marks: ";
        cin>>marks[0]>>marks[1];
    }
    void printDetails()
    {
        cout<<"Name: "<<name<<endl
            <<"Subject: "<<subject<<endl
            <<"Marks1: "<<marks[0]<<endl
            <<"Marks2: "<<marks[1]<<endl;
    }
    void storeDetails()
    {
        ofstream out;
        out.open("Trial.txt");
        out.write((char*)this, sizeof(*this));
        out.close();
    }
    void viewDetails()
    {
        ifstream in;
        in.open("Trial.txt");
        in.read((char*)this, sizeof(*this));
        while(!in.eof())
        {
            printDetails();
            in.read((char*)this, sizeof(*this));
        }
        in.close();
    }
    void searchDetails(char *n)
    {
        ifstream in;
        in.open("Trial.txt");
        in.read((char*)this, sizeof(*this));
        while(!in.eof())
        {
            if(strcmp(n,name)==0)
            {
                cout<<"Equal Names"<<endl;
                printDetails();
                break;
            }
            in.read((char*)this, sizeof(*this));
        }
        in.close();
    }
    void deleteDetails(char *n)
    {
        ifstream in;
        ofstream out;
        in.open("Trial.txt");
        out.open("temp.txt");
        in.read((char*)this, sizeof(*this));
        while(!in.eof())
        {
            if(strcmp(n,name))
            {
                out.write((char*)this, sizeof(*this));
            }
            in.read((char*)this, sizeof(*this));
        }
        in.close();
        out.close();
        remove("Trial.txt");
        rename("temp.txt", "Trial.txt");
    }
    Trial(const Trial &t)
    {
        strcpy(name, t.name);
        strcpy(subject, NULL);
        marks[0] = t.marks[0];
        marks[1] = t.marks[1];
    }
    void updateDetails(char *n)
    {
        fstream file;
        file.open("Trial.txt", ios::in | ios::out | ios::ate);
        file.seekg(0);
        file.read((char*)this, sizeof(*this));
        while(!file.eof())
        {
            if(!strcmp(n,name))
            {
                getDetails();
                int pos = file.tellp();
                int len = sizeof(*this);
                file.seekp(pos-len);
                file.write((char*)this, sizeof(*this));
            }
            file.read((char*)this, sizeof(*this));
        }
        file.close();
    
    void updateSubjectDetails(char *n)
    {
        fstream file;
        file.open("Trial.txt", ios::in | ios::out);
        file.seekg(0);
        file.read((char*)this, sizeof(*this));
        if(!file)
        {
            cout<<"File not opened!!"<<endl;
        }
        else
        {
            while(!file.eof())
            {
                if(!strcmp(n,name))
                {
                    if(this->subject)
                    {
                        cin>>this->subject;
                        file.write((char*)this, sizeof(*this));
                    }
                    // file.read((char*)this, sizeof(*this));
                }
                file.read((char*)this, sizeof(*this));
            }
        }
    }
};
int main()
{
    Trial T;
    int n;
    cout<<"Enter number of data u want to enter: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        T.getDetails();
        T.storeDetails();
    }
    // T.searchDetails("Tosha");
    // T.deleteDetails("Tosha");
    cout<<"Updating the details!!"<<endl;
    // T.updateDetails("Tosha");
    T.updateSubjectDetails("Tosha");
    T.viewDetails();
    return 0;
}