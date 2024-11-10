#include<iostream>
using namespace std;
int main()
{
    int numbers[3];
    for(int i=0; i<3; i++)
    {
        cout<<"Enter Numbers: ";
        cin>>numbers[i];
    }
    int n;
    cout<<"Enter the number of times you want to perform even-odd: ";
    cin>>n;
    for(int j=0; j<n; j++)
    {
        for(int z=0; z<3; z++)
        {
            if(numbers[z]%2==0)
            {
                numbers[z]=numbers[z]-2;
            }
            else
            {
                numbers[z]=numbers[z]+2;
            }
        }
    }
    cout<<"[";
    for(int x=0;x<3;x++)
    {
        cout<<numbers[x];
        if(x<2)
        {
            cout<<",";
        }    
    }
    cout<<"]";


    
}