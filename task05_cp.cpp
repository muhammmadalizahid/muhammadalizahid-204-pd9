#include<iostream>
using namespace std;
bool output(string word[], int n)
{
    
    string max=word[0];
    bool result=true;
    for(int i=0; i<n; i++)
    {
        if(word[i]!=max)
        {
            result= false;
        }
    }
    return result;
}
int main()
{
    int n;
    cout<<"Enter the number of words you want to enter: ";
    cin>>n;
    string words[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Word: ";
        cin>>words[i];
    }
    bool result=output(words, n);
    cout<<result;
}
