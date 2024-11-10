#include<iostream>
using namespace std;
int main()
{
    int count=0;
    string s1, s2;
    cout<<"Enter string 1: ";
    cin>>s1;
    cout<<"Enter string 2: ";
    cin>>s2;
    bool interated[10]={false};

    for(int i=0;s1[i]!='\0'; i++)
    {
        for(int j=0; s2[j]!='\0'; j++)
        {
            if(s1[i]==s2[j] && interated[j]==false)
            {
                count++;
                interated[j]=true;
                break;   
            }
        
        }
    }
    cout<<count;
}