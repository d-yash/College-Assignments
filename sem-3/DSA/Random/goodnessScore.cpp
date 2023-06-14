#include<iostream>
using namespace std;

class goodness
{
    int target, ans, goodScore=0, len;
    string str;
    public:
        void findGoodness(string str, int target, int len)
        {
            this->str = str;
            this->target = target;
            this->len = len;
            for(int i=0; i<len/2; i++)
            {
                if(str.at(i) != str.at(len-i-1))
                {
                    goodScore += 1;
                }
            }
            ans = abs(goodScore - target);
        }
        int getAnswer()
        {
            return ans;
        }
};
int main()
{
    int target, len, noOfCases;
    string str;
    cin>>noOfCases;
    goodness gn[noOfCases];
    for(int i=0; i<noOfCases; i++)
    {
        cin>>len>>target>>str;
        gn[i].findGoodness(str, target, len);
    }
    for(int i=0; i<noOfCases; i++)
    {
        cout<<"\nCase #"<<i<<": "<<gn[i].getAnswer();
    }
    return 0;
}