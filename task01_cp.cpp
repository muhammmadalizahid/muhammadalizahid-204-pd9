#include<iostream>
using namespace std;
int main()
{
    string fruit[]={"peach","apple","guava","watermellon"};
    int price[]={60,70,40,30};
    string name;
    int quantity,total;
    cout<<"Enter fruit name: ";
    cin>>name;
    cout<<"Enter the quantiity: ";
    cin>>quantity;
    for(int i=0; i<5; i++)
    {
        if(fruit[i]==name)
        {
            total=price[i]*quantity;
            break;
        }
    }
    cout<<"The total bill for "<<quantity<<" kgs of "<<name<< "is: "<<total;
}