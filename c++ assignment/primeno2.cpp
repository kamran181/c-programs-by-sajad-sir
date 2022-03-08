//printing prime numbers between a and b
#include<iostream>
using namespace std;
int main()
{ 
    int a,b,n,i,e;
    cout<<"enter the number the buddy\n";
    cin>>a>>b;
    for(i=a;i<=b;i++)//this loop will go from a to b
    {for(e=2;e<i;e++)//this loop will check the number is prime or not
    {
        if(i%e==0)
        {
        break;
        }
    }
   if(e==i)
   {
       cout<<i<<"\n";
   }
    }
return 0;
}