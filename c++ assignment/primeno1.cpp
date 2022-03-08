//Finding a number is prime or not
#include<iostream>
using namespace std;
int main()
{
 int i,n;
 cout<<"Enter the number buddy\n";
 cin>>n;
 for(i=2;i<n;i++)//1 divides all numbers 
 {
   if((n%i)==0)
{
cout<<" Not a prime number"<<"\n";
break;
}
 }
if(n==i)//when loop is finished
{
cout<<"prime number"<<"\n";
}
return 0;
}