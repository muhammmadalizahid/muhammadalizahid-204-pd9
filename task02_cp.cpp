#include<iostream>
using namespace std;
int main()
{
   int price=500;
   string movie[]={"Gladiator","StarWars","Terminator","TakingLives","TombRider"};
   string name;
   cout<<"Enter movie name: ";
   cin>>name;
   for(int i=0; i<5; i++)
   {
     if(name==movie[i])
     {
        if(i%2==0)
        {
            price=price*0.90;
        }
        else
        {
            price=price*0.95;
        }
     }
   }
   cout<<"Payable price of the movie ticket: "<<price;
}