#include<iostream>
using namespace std;
bool output(int numbers[], int n)
{
    bool result=false;
    for(int i=0; i<=n; i++)
    {
        if(numbers[i]==7)
        {
            result= true;
        }
        return result;
    }

}
int main()
{
    int n;
    cout<<"Enter the number of numbers you want to enter: ";
    cin>>n;
    int numbers[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Number: ";
        cin>>numbers[i];
    }
    bool result=output(numbers, n );
    if(result==true)
    {
        cout<<"Boom!";
    }
    else
    {
        cout<<"There is no 7 in the array.";
    }

}
