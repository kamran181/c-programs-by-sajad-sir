//sum of the n odd  numbers
#include<iostream>
using namespace std;
int main()
{
 int n,i,sum;
 cout<<"Enter the number buddy \n";
 cin>>n;
 i=1;
 sum=0;
 for(i=1;i<=n;i++)
 {
     if((i%2)!=0)
     {
         sum=sum+i;
     }

 }   

cout<<"the sum of numbers from 1 to "<<n<<"is\n"<<sum<<"\n";
return 0;
}