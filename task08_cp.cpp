#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of colours you want to enter: ";
    cin>>n;
    string colours[n];
    int count=0;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the colour: ";
        cin>>colours[i];
    }
    for(int j=0; j<n; j++)
    {
        if(colours[j]!=colours[j+1])
        {
            count++;
        }
    }
    int calculation=(n*2)+count-1;
    cout<<"The total time required is: "<<calculation<<" seconds.";
}