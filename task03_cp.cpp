#include<iostream>
using namespace std;
int main()
{
    string input;
    cout<<"Enter a word: ";
    cin>>input;
    int count=0;
    for(int i=0; input[i]!='\0';i++)
    {
        count++;
    }
    if(count%2==0)
    {
        cout<<true;
    }
    else
    {
        cout<<false;
    }

}
