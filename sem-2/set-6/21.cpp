/*Implement a class string containing the following functions: 
- Overload + operator to carry out the concatenation of strings. 
- Overload = operator to carry out string copy. 
- Overload <= operator to carry out the comparison of strings. 
- Function to display the length of a string. 
- Function tolower( ) to convert upper case letters to lower case. 
- Function toupper( ) to convert lower case letters to upper case.*/

#include<iostream>
#include<cstring>
using namespace std;
class String 
{
    char str[50];
    public:
        String(){}
        String(char *str) { strcpy(this->str, str); }
        void operator+(String s)
        {
            cout<<"\nConcatenation of String : "<<strcat(this->str, s.str)<<endl;
        }
        void operator =(String s)
        {
            cout<<"\nCopied String : "<<strcpy(this->str, s.str)<<endl;
        }
        void operator <=(String s)
        {
            int temp = strcmp(this->str, s.str);
            if(temp==0)
            {
                cout<<"\nBoth String is same"<<endl;
            }
            else if(temp==-1)
            {
                cout<<"\nString 2 is Greater than String 1"<<endl;
            }
            else
            {
                cout<<"\nString 1 is Greater than String 2"<<endl;
            }
        }
        void length()
        {
            cout<<"\nLength of the String is : "<<strlen(this->str)<<endl;
        }
        void upper()
        {
           for(int i=0; i<strlen(str); i++)
           {
               str[i] = toupper(str[i]);
           }
           cout<<"\nUpper cased String : "<<str<<endl;
        }
        void lower()
        {
            for(int i=0; i<strlen(str); i++)
            {
                str[i] = tolower(str[i]);
            }
            cout<<"\nLower cased String : "<<str<<endl;
        }
};
int main()
{
    char s1[50], s2[50];
    cout<<"\nEnter the first String : ";
    cin.getline(s1, 50); 
    cout<<"\nEnter the second String : ";
    cin.getline(s2, 50);

    String string1(s1);
    String string2(s2);
    string1 + string2;
    string1 <= string2;
    string1.length();
    string1.upper();
    string1.lower();
    string1 = string2;
    return 0;
}