#include<iostream>
using namespace std;
int main()
{
    string moves[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado","Pop", "Lock", "Arabesque"};
    int pin;
    cout<<"Enter your 4 digit pincode: ";
    cin>>pin;
    int digits[4];
    for(int i=0; i<4; i++)
    {
        digits[i]=pin%10;
        pin=pin/10;
        if(digits[i]!=0 && digits[i]!=1 && digits[i]!=2 && digits[i]!=3 && digits[i]!=4 && digits[i]!=5 && digits[i]!=6 && digits[i]!=7 && digits[i]!=8 && digits[i]!=9)
        {
            cout<<"Invalid Input.";
            return 0;
        }
    }
    for(int j=0;j<4;j++)
    {
       cout<<(moves[digits[j]+j]);
       if(j<3)
       {
         cout<<", ";
       }
    }
} 